//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIImage.h"

@interface UIImage (Utility)
+ (char *)convertUIImageToBitmapRGBA8:(id)arg1 pLength:(unsigned long long *)arg2;
+ (struct CGContext *)newBitmapRGBA8ContextFromImage:(struct CGImage *)arg1;
+ (id)imageWithColor:(id)arg1;
+ (struct CGSize)getFitInSize;
+ (struct CGAffineTransform)transformForOrientation:(struct CGSize)arg1 orientation:(long long)arg2;
+ (id)correctImage:(id)arg1 toFitIn:(struct CGSize)arg2 drawQuality:(int)arg3;
+ (id)correctImage:(id)arg1 toFitIn:(struct CGSize)arg2;
+ (id)correctImage:(id)arg1 drawQuality:(int)arg2;
+ (id)correctImage:(id)arg1;
+ (id)fastCorrectImage:(id)arg1 toFitIn:(struct CGSize)arg2;
+ (id)convertViewToImage:(id)arg1;
+ (id)adjustImageScale:(id)arg1;
+ (id)fastImageWithName:(id)arg1;
+ (id)fastImageWithContentsOfFile:(id)arg1;
+ (id)fastImageWithData:(id)arg1;
+ (id)decode:(id)arg1;
- (id)rotate:(long long)arg1;
- (id)imageCompressForTargetWidth:(double)arg1;
- (id)gaussBlur:(double)arg1;
- (id)maskedImage:(id)arg1;
- (id)crop:(struct CGRect)arg1;
- (id)aspectFill:(struct CGSize)arg1 offset:(double)arg2;
- (id)aspectFill:(struct CGSize)arg1;
- (id)aspectFit:(struct CGSize)arg1;
- (id)resize:(struct CGSize)arg1;
- (id)grayScaleImage;
- (id)deepCopy;
@end

