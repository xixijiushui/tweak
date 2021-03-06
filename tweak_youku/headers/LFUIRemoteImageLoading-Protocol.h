//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSURL, UIImage;

@protocol LFUIRemoteImageLoading <NSObject>
- (void)lf_cancelImageDownload;
- (void)lf_setImageFromURL:(NSURL *)arg1 placeholderImage:(UIImage *)arg2 processorKey:(NSString *)arg3 processor:(UIImage * (^)(UIImage *, unsigned long long *))arg4 completion:(void (^)(UIImage *, NSError *))arg5;
- (void)lf_setImageFromURL:(NSURL *)arg1 processorKey:(NSString *)arg2 processor:(UIImage * (^)(UIImage *, unsigned long long *))arg3 completion:(void (^)(UIImage *, NSError *))arg4;
- (void)lf_setImageFromURL:(NSURL *)arg1 placeholderImage:(UIImage *)arg2 processorKey:(NSString *)arg3 processor:(UIImage * (^)(UIImage *, unsigned long long *))arg4;
- (void)lf_setImageFromURL:(NSURL *)arg1 processorKey:(NSString *)arg2 processor:(UIImage * (^)(UIImage *, unsigned long long *))arg3;
- (void)lf_setImageFromURL:(NSURL *)arg1 placeholderImage:(UIImage *)arg2 processorKey:(NSString *)arg3;
- (void)lf_setImageFromURL:(NSURL *)arg1 processorKey:(NSString *)arg2;
- (void)lf_setImageWithURL:(NSURL *)arg1 placeholderImage:(UIImage *)arg2 completed:(void (^)(UIImage *, NSError *))arg3;
- (void)lf_setImageWithURL:(NSURL *)arg1 completed:(void (^)(UIImage *, NSError *))arg2;
- (void)lf_setImageWithURL:(NSURL *)arg1 placeholderImage:(UIImage *)arg2;
- (void)lf_setImageWithURL:(NSURL *)arg1;
@end

