//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, TBAnimatedImage, UIImage;

@protocol YKFMWPhoto <NSObject>
@property(retain, nonatomic) TBAnimatedImage *animatedImage;
@property(retain, nonatomic) UIImage *underlyingImage;
- (void)unloadUnderlyingImage;
- (void)performLoadUnderlyingImageAndNotify;
- (void)loadUnderlyingImageAndNotify;
- (_Bool)isGifURL;
- (void)underlyingImageData:(void (^)(NSData *))arg1;

@optional
@property(nonatomic) _Bool isVideo;
@property(nonatomic) _Bool emptyImage;
- (void)cancelAnyLoading;
- (NSString *)caption;
- (void)getVideoURL:(void (^)(NSURL *))arg1;
@end

