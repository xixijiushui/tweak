//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class TTPraiseService;

@interface TTPraiseView : UIView
{
    id <TTPraiseViewDelegate> _delegate;
    UIView *_bgView;
    TTPraiseService *_service;
}

@property(retain, nonatomic) TTPraiseService *service; // @synthesize service=_service;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
@property(nonatomic) __weak id <TTPraiseViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)imageNameFromType:(unsigned long long)arg1;
- (void)emojiTouched:(id)arg1;
- (void)loadSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
