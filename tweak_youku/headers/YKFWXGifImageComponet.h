//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WXImageComponent.h"

#import "GIFImageViewDelegate.h"

@class NSString;

@interface YKFWXGifImageComponet : WXImageComponent <GIFImageViewDelegate>
{
    _Bool _isStoppedAnimation;
}

@property(nonatomic) _Bool isStoppedAnimation; // @synthesize isStoppedAnimation=_isStoppedAnimation;
- (void)internalUpdateAttributes:(id)arg1;
- (void)updateAttributes:(id)arg1;
- (_Bool)imageViewShouldStartAnimating:(id)arg1;
- (id)loadView;
- (id)initWithRef:(id)arg1 type:(id)arg2 styles:(id)arg3 attributes:(id)arg4 events:(id)arg5 weexInstance:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
