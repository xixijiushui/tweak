//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIImageGIFView.h"

#import "LFUIRemoteImageLoading.h"
#import "SDWebImageManagerDelegate.h"

@class NSString;

@interface LFUIAnimatedImageView : UIImageGIFView <SDWebImageManagerDelegate, LFUIRemoteImageLoading>
{
}

- (void)lf_cancelImageDownload;
- (void)lf_setImageFromURL:(id)arg1 placeholderImage:(id)arg2 processorKey:(id)arg3 processor:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
- (id)imageManager:(id)arg1 transformDownloadedImage:(id)arg2 withURL:(id)arg3;
- (void)lf_setImageFromURL:(id)arg1 processorKey:(id)arg2 processor:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)lf_setImageFromURL:(id)arg1 placeholderImage:(id)arg2 processorKey:(id)arg3;
- (void)lf_setImageFromURL:(id)arg1 placeholderImage:(id)arg2 processorKey:(id)arg3 processor:(CDUnknownBlockType)arg4;
- (void)lf_setImageFromURL:(id)arg1 processorKey:(id)arg2 processor:(CDUnknownBlockType)arg3;
- (void)lf_setImageFromURL:(id)arg1 processorKey:(id)arg2;
- (void)lf_setImageWithURL:(id)arg1 placeholderImage:(id)arg2 completed:(CDUnknownBlockType)arg3;
- (void)lf_setImageWithURL:(id)arg1 completed:(CDUnknownBlockType)arg2;
- (void)lf_setImageWithURL:(id)arg1 placeholderImage:(id)arg2;
- (void)lf_setImageWithURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

