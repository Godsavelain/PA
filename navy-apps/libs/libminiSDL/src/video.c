#include <NDL.h>
#include <sdl-video.h>
#include <assert.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

void SDL_BlitSurface(SDL_Surface *src, SDL_Rect *srcrect, SDL_Surface *dst, SDL_Rect *dstrect) {
  //judge if the surface use palette
  //printf("BlitSurface\n");
  int src_use_palette = 0;
  if(src->format->palette != NULL){
    src_use_palette = 1;
  }
  int dst_use_palette = 0;
  if(dst->format->palette != NULL){
    dst_use_palette = 1;
  }
  //printf("src palette %d dst palette %d\n",src_use_palette,dst_use_palette);
  assert(dst && src);
  assert(dst->format->BitsPerPixel == src->format->BitsPerPixel);
  int x1,x2;
  int y1,y2;
  int w;
  int h;
  int buf_size;
  int src_offset;
  int dst_offset;

  if(srcrect == NULL){
    x1 = 0;
    y1 = 0;
    w  = src->w;
    h  = src->h;
  }
  else{
    x1 = srcrect->x;
    y1 = srcrect->y;
    w = srcrect->w;
    h = srcrect->h;
  }
  if(dstrect == NULL){
    x2 = 0;
    y2 = 0;
  }
  else{
    x2 = dstrect->x;
    y2 = dstrect->y;
    //printf("x2 %d y2 %d",x2,y2);
  }
  if(src_use_palette == 1){
    src_offset = ((src->w * y1) + x1) * sizeof(char);
  }
  else{
    src_offset = ((src->w * y1) + x1) * sizeof(int);
  }
  if(dst_use_palette == 1){
    dst_offset = ((dst->w * y2) + x2) * sizeof(char);
  }
  else{
    dst_offset = ((dst->w * y2) + x2) * sizeof(int);
  }
  
  //buf_size = w * h * sizeof(int);
  for(int i=0;i<h;i++){
    for(int j=0;j<w;j++){
      if(src_use_palette == 1){
        src_offset = ((src->w * (y1 + i)) + x1 + j) * sizeof(char);
      }
      else{
        src_offset = ((src->w * (y1 + i)) + x1 + j) * sizeof(int);
      }
      if(dst_use_palette == 1){
        dst_offset = ((dst->w * (y2 + i)) + x2 + j) * sizeof(char);
      }
      else{
        dst_offset = ((dst->w * (y2 + i)) + x2 + j) * sizeof(int);
      }
      if(dst_use_palette == 1){
        memcpy((dst->pixels + dst_offset), (src->pixels + src_offset), 1);
      }
      else if(src_use_palette == 1){
        *(dst->pixels + dst_offset) = (src->format->palette->colors[*(src->pixels + src_offset)]).val;
      }
      else{
        memcpy((dst->pixels + dst_offset), (src->pixels + src_offset), 4);
      }
    }
  }
  if(dst_use_palette == 1){
    uint32_t *true_buffer;
    true_buffer = malloc(w * h * sizeof(uint32_t));
    for(int i=0;i<w*h;i++){
      true_buffer[i] = dst->format->palette->colors[(int)*(dst->pixels + i)].val;
    }
    NDL_DrawRect(true_buffer , x2, y2, w, h);
    free(true_buffer);
  }
  else{
    NDL_DrawRect((uint32_t *)dst->pixels , x2, y2, w, h);
  }
  
}

void SDL_FillRect(SDL_Surface *dst, SDL_Rect *dstrect, uint32_t color) {

    if(dst->format->palette != NULL){
      assert(0);
    }

    int screen_w = dst->w;
    int screen_h = dst->h;
    int x = 0;
    int y = 0;
    int w = 0;
    int h = 0;
    if(dstrect == NULL){
      x = 0;
      y = 0;
      w = screen_w;
      h = screen_h;
    }
    else{
      x = dstrect->x;
      y = dstrect->y;
      w = dstrect->w;
      h = dstrect->h;
    }
    for(int i=y;i<(y+h);i++){
      for(int j=x;j<(x+w);j++){
        ((int *)(dst->pixels))[((i*screen_w) + j)] = color;
      }
    }
    NDL_DrawRect((uint32_t *)dst->pixels , x, y, w, h); 
}

void SDL_UpdateRect(SDL_Surface *s, int x, int y, int w, int h) {
  //printf("UpdateRect\n");
  int use_palette = 0;
  int sys_w = 0;
  int sys_h = 0;
  sys_w = s->w;
  sys_h = s->h;
  if(s->format->palette != NULL){
    use_palette = 1;
  }
  if((x ==0) && (y ==0) && (w ==0) && (h ==0)){
    if(use_palette == 1){
      //printf("Use palette\n");
      uint32_t *true_buffer;
      true_buffer = malloc(sys_w * sys_h * sizeof(uint32_t));
      for(int i=0;i<sys_w*sys_h;i++){
        uint32_t r_pixel = s->format->palette->colors[(int)*(s->pixels + i)].r;
        uint32_t g_pixel = s->format->palette->colors[(int)*(s->pixels + i)].g;
        uint32_t b_pixel = s->format->palette->colors[(int)*(s->pixels + i)].b;
        // true_buffer[i] = s->format->palette->colors[(int)*(s->pixels + i)].val;
        true_buffer[i] = (r_pixel << 16) | (g_pixel << 8) | b_pixel;
      }
      NDL_DrawRect(true_buffer, x, y, sys_w, sys_h);
      free(true_buffer);
    }
    else{
      NDL_DrawRect((uint32_t *)s->pixels, x, y, sys_w, sys_h);
    }
  }
  else{
    if(use_palette == 1){
      uint32_t *true_buffer;
      true_buffer = malloc(sys_w * sys_h * sizeof(uint32_t));
      for(int i=0;i<sys_w*sys_h;i++){
        true_buffer[i] = s->format->palette->colors[(int)*(s->pixels + i)].val;
      }
      NDL_DrawRect(true_buffer, x, y, w, h);
      free(true_buffer);
    }
    else{
      NDL_DrawRect((uint32_t *)s->pixels, x, y, w, h);
    } 
  } 
}

// APIs below are already implemented.

static inline int maskToShift(uint32_t mask) {
  switch (mask) {
    case 0x000000ff: return 0;
    case 0x0000ff00: return 8;
    case 0x00ff0000: return 16;
    case 0xff000000: return 24;
    case 0x00000000: return 24; // hack
    default: assert(0);
  }
}

SDL_Surface* SDL_CreateRGBSurface(uint32_t flags, int width, int height, int depth,
    uint32_t Rmask, uint32_t Gmask, uint32_t Bmask, uint32_t Amask) {
  assert(depth == 8 || depth == 32);
  SDL_Surface *s = malloc(sizeof(SDL_Surface));
  assert(s);
  s->flags = flags;
  s->format = malloc(sizeof(SDL_PixelFormat));
  assert(s->format);
  if (depth == 8) {
    s->format->palette = malloc(sizeof(SDL_Palette));
    assert(s->format->palette);
    s->format->palette->colors = malloc(sizeof(SDL_Color) * 256);
    assert(s->format->palette->colors);
    memset(s->format->palette->colors, 0, sizeof(SDL_Color) * 256);
    s->format->palette->ncolors = 256;
  } else {
    s->format->palette = NULL;
    s->format->Rmask = Rmask; s->format->Rshift = maskToShift(Rmask); s->format->Rloss = 0;
    s->format->Gmask = Gmask; s->format->Gshift = maskToShift(Gmask); s->format->Gloss = 0;
    s->format->Bmask = Bmask; s->format->Bshift = maskToShift(Bmask); s->format->Bloss = 0;
    s->format->Amask = Amask; s->format->Ashift = maskToShift(Amask); s->format->Aloss = 0;
  }

  s->format->BitsPerPixel = depth;
  s->format->BytesPerPixel = depth / 8;

  s->w = width;
  s->h = height;
  s->pitch = width * depth / 8;
  assert(s->pitch == width * s->format->BytesPerPixel);

  if (!(flags & SDL_PREALLOC)) {
    s->pixels = malloc(s->pitch * height);
    assert(s->pixels);
  }

  return s;
}

SDL_Surface* SDL_CreateRGBSurfaceFrom(void *pixels, int width, int height, int depth,
    int pitch, uint32_t Rmask, uint32_t Gmask, uint32_t Bmask, uint32_t Amask) {
  SDL_Surface *s = SDL_CreateRGBSurface(SDL_PREALLOC, width, height, depth,
      Rmask, Gmask, Bmask, Amask);
  assert(pitch == s->pitch);
  s->pixels = pixels;
  return s;
}

void SDL_FreeSurface(SDL_Surface *s) {
  if (s != NULL) {
    if (s->format != NULL) {
      if (s->format->palette != NULL) {
        if (s->format->palette->colors != NULL) free(s->format->palette->colors);
        free(s->format->palette);
      }
      free(s->format);
    }
    if (s->pixels != NULL && !(s->flags & SDL_PREALLOC)) free(s->pixels);
    free(s);
  }
}

SDL_Surface* SDL_SetVideoMode(int width, int height, int bpp, uint32_t flags) {
  if (flags & SDL_HWSURFACE) NDL_OpenCanvas(&width, &height);
  return SDL_CreateRGBSurface(flags, width, height, bpp,
      DEFAULT_RMASK, DEFAULT_GMASK, DEFAULT_BMASK, DEFAULT_AMASK);
}

void SDL_SoftStretch(SDL_Surface *src, SDL_Rect *srcrect, SDL_Surface *dst, SDL_Rect *dstrect) {
  assert(src && dst);
  assert(dst->format->BitsPerPixel == src->format->BitsPerPixel);
  assert(dst->format->BitsPerPixel == 8);

  int x = (srcrect == NULL ? 0 : srcrect->x);
  int y = (srcrect == NULL ? 0 : srcrect->y);
  int w = (srcrect == NULL ? src->w : srcrect->w);
  int h = (srcrect == NULL ? src->h : srcrect->h);

  assert(dstrect);
  if(w == dstrect->w && h == dstrect->h) {
    /* The source rectangle and the destination rectangle
     * are of the same size. If that is the case, there
     * is no need to stretch, just copy. */
    SDL_Rect rect;
    rect.x = x;
    rect.y = y;
    rect.w = w;
    rect.h = h;
    SDL_BlitSurface(src, &rect, dst, dstrect);
  }
  else {
    assert(0);
  }
}

void SDL_SetPalette(SDL_Surface *s, int flags, SDL_Color *colors, int firstcolor, int ncolors) {
  assert(s);
  assert(s->format);
  assert(s->format->palette);
  assert(firstcolor == 0);

  s->format->palette->ncolors = ncolors;
  memcpy(s->format->palette->colors, colors, sizeof(SDL_Color) * ncolors);

  if(s->flags & SDL_HWSURFACE) {
    assert(ncolors == 256);
    for (int i = 0; i < ncolors; i ++) {
      uint8_t r = colors[i].r;
      uint8_t g = colors[i].g;
      uint8_t b = colors[i].b;
    }
    SDL_UpdateRect(s, 0, 0, 0, 0);
  }
}

static void ConvertPixelsARGB_ABGR(void *dst, void *src, int len) {
  int i;
  uint8_t (*pdst)[4] = dst;
  uint8_t (*psrc)[4] = src;
  union {
    uint8_t val8[4];
    uint32_t val32;
  } tmp;
  int first = len & ~0xf;
  for (i = 0; i < first; i += 16) {
#define macro(i) \
    tmp.val32 = *((uint32_t *)psrc[i]); \
    *((uint32_t *)pdst[i]) = tmp.val32; \
    pdst[i][0] = tmp.val8[2]; \
    pdst[i][2] = tmp.val8[0];

    macro(i + 0); macro(i + 1); macro(i + 2); macro(i + 3);
    macro(i + 4); macro(i + 5); macro(i + 6); macro(i + 7);
    macro(i + 8); macro(i + 9); macro(i +10); macro(i +11);
    macro(i +12); macro(i +13); macro(i +14); macro(i +15);
  }

  for (; i < len; i ++) {
    macro(i);
  }
}

SDL_Surface *SDL_ConvertSurface(SDL_Surface *src, SDL_PixelFormat *fmt, uint32_t flags) {
  assert(src->format->BitsPerPixel == 32);
  assert(src->w * src->format->BytesPerPixel == src->pitch);
  assert(src->format->BitsPerPixel == fmt->BitsPerPixel);

  SDL_Surface* ret = SDL_CreateRGBSurface(flags, src->w, src->h, fmt->BitsPerPixel,
    fmt->Rmask, fmt->Gmask, fmt->Bmask, fmt->Amask);

  assert(fmt->Gmask == src->format->Gmask);
  assert(fmt->Amask == 0 || src->format->Amask == 0 || (fmt->Amask == src->format->Amask));
  ConvertPixelsARGB_ABGR(ret->pixels, src->pixels, src->w * src->h);

  return ret;
}

uint32_t SDL_MapRGBA(SDL_PixelFormat *fmt, uint8_t r, uint8_t g, uint8_t b, uint8_t a) {
  assert(fmt->BytesPerPixel == 4);
  uint32_t p = (r << fmt->Rshift) | (g << fmt->Gshift) | (b << fmt->Bshift);
  if (fmt->Amask) p |= (a << fmt->Ashift);
  return p;
}

int SDL_LockSurface(SDL_Surface *s) {
  printf("LockSurface\n");
  return 0;
}

void SDL_UnlockSurface(SDL_Surface *s) {
  printf("UnlockSurface\n");
}
