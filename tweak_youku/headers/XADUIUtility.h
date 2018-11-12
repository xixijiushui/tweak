//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface XADUIUtility : NSObject
{
}

+ (struct CGSize)caculateTextLayerSizeWithFont:(id)arg1 withText:(id)arg2 withSize:(long long)arg3 withColor:(id)arg4;
+ (void)setAttributedStringWithFont:(id)arg1 withText:(id)arg2 withSize:(long long)arg3 withColor:(id)arg4 withBaselineOffset:(double)arg5 forLayer:(id)arg6;
+ (id)addCornerWithRadius:(double)arg1 withSize:(struct CGSize)arg2 forImage:(id)arg3;
+ (struct CGSize)sizeWithText:(id)arg1 font:(id)arg2 maxWidth:(double)arg3 maxLine:(long long)arg4;
+ (struct CGSize)sizeWithLabel:(id)arg1 maxWidth:(double)arg2;
+ (void)circleForView:(id)arg1 withRadius:(int)arg2;
+ (void)addLineForView:(id)arg1;
+ (struct CGSize)calTextSize:(id)arg1 limiteWidth:(double)arg2 font:(id)arg3;
+ (float)calculateTextWidth:(id)arg1 textFont:(id)arg2 textFrame:(struct CGSize)arg3;
+ (float)calculateTextHeight:(id)arg1 textFont:(id)arg2 textFrame:(struct CGSize)arg3;
+ (id)hexFromUIColor:(id)arg1;
+ (id)imageNameContainiPhoneBundle:(id)arg1;
+ (id)imageNameContainiPadBundle:(id)arg1;
+ (id)imageNameContainBundle:(id)arg1;
+ (id)scaledImage:(id)arg1 withSize:(struct CGSize)arg2;
+ (id)interceptSubImageFrom:(id)arg1 withRect:(struct CGRect)arg2;

@end

