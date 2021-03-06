//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIScrollView.h"

@class YKMediaEditorContentView;

@interface YKMediaEditorScrollView : UIScrollView
{
    YKMediaEditorContentView *_imageContentView;
    CDUnknownBlockType _touchesBegan;
    CDUnknownBlockType _touchesCancelled;
    CDUnknownBlockType _touchesEnded;
}

@property(copy, nonatomic) CDUnknownBlockType touchesEnded; // @synthesize touchesEnded=_touchesEnded;
@property(copy, nonatomic) CDUnknownBlockType touchesCancelled; // @synthesize touchesCancelled=_touchesCancelled;
@property(copy, nonatomic) CDUnknownBlockType touchesBegan; // @synthesize touchesBegan=_touchesBegan;
@property(retain, nonatomic) YKMediaEditorContentView *imageContentView; // @synthesize imageContentView=_imageContentView;
- (void).cxx_destruct;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (double)zoomScaleToBound;
- (void)setContentOffsetX:(double)arg1;
- (void)setContentOffsetY:(double)arg1;

@end

