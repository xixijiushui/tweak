//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIColor, UIImage;

@interface WVNavigationBarBackgroundStatus : NSObject
{
    _Bool _translucent;
    UIImage *_defaultBackgroundImage;
    UIColor *_barTintColor;
    UIImage *_shadowImage;
}

+ (id)captureStatus:(id)arg1;
@property(retain, nonatomic) UIImage *shadowImage; // @synthesize shadowImage=_shadowImage;
@property(retain, nonatomic) UIColor *barTintColor; // @synthesize barTintColor=_barTintColor;
@property(retain, nonatomic) UIImage *defaultBackgroundImage; // @synthesize defaultBackgroundImage=_defaultBackgroundImage;
@property(nonatomic) _Bool translucent; // @synthesize translucent=_translucent;
- (void).cxx_destruct;
- (void)apply:(id)arg1;

@end
