//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIImage.h"

@interface UIImage (GImageExtension)
+ (id)imageWithColor:(id)arg1;
- (unsigned long long)byteCount;
- (struct CGSize)sizeOfMemorySize:(unsigned long long)arg1;
- (id)imageByCompressToMemorySize:(unsigned long long)arg1;
- (id)grayImage;
- (id)imageRotatedByDegrees:(double)arg1;
- (id)imageRotatedByRadians:(double)arg1;
- (id)imageByScalingToSize:(struct CGSize)arg1 retinaFit:(_Bool)arg2;
- (id)imageByScalingToSize:(struct CGSize)arg1;
- (id)imageByScalingProportionallyToSize:(struct CGSize)arg1;
- (id)imageByScalingProportionallyToMinimumSize:(struct CGSize)arg1;
- (id)imageAtRect:(struct CGRect)arg1;
@end

