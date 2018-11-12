//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@interface UIView (WebCacheOperation)
- (void)sd_saveLoadImageParam:(id)arg1 module:(id)arg2 placeholderImage:(id)arg3 imageSize:(struct CGSize)arg4 options:(unsigned long long)arg5 progress:(CDUnknownBlockType)arg6 transform:(CDUnknownBlockType)arg7 completed:(CDUnknownBlockType)arg8 playLoopBlock:(CDUnknownBlockType)arg9;
- (_Bool)sd_needAddNetworkObserver;
- (void)sd_clearLoadImageParam;
- (id)sd_getLoadImageParam;
- (void)sd_saveLoadImageParam:(id)arg1 forState:(unsigned long long)arg2 module:(id)arg3 placeholder:(id)arg4 imageSize:(struct CGSize)arg5 cutType:(long long)arg6 method:(long long)arg7 options:(unsigned long long)arg8 progress:(CDUnknownBlockType)arg9 completed:(CDUnknownBlockType)arg10;
- (void)sd_saveLoadImageParam:(id)arg1 module:(id)arg2 placeholder:(id)arg3 imageSize:(struct CGSize)arg4 cutType:(long long)arg5 options:(unsigned long long)arg6 progress:(CDUnknownBlockType)arg7 completed:(CDUnknownBlockType)arg8;
- (long long)sd_getRetryCount;
- (void)sd_setRetryCount:(long long)arg1;
- (long long)sd_getImageLoadStatus;
- (id)sd_getCurrentImageAddress;
- (void)sd_setCurrentImageAddress:(id)arg1;
- (void)sd_setImageLoadStatus:(long long)arg1;
- (void)sd_removeImageLoadOperationWithKey:(id)arg1;
- (void)sd_cancelImageLoadOperationWithKey:(id)arg1;
- (void)sd_setImageLoadOperation:(id)arg1 forKey:(id)arg2;
- (id)operationDictionary;
@end

