//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableArray, NSString, UIButton, UIImageView, UILabel;

@interface YKFeedEndView : UIView
{
    id <YKFeedEndViewDelegate> _delegate;
    NSString *_bgImageUrl;
    UIImageView *_bgImageView;
    UIView *_coverView;
    UILabel *_titleLabel;
    UIButton *_replayBtn;
    NSMutableArray *_filterItems;
    NSMutableArray *_shareBtns;
}

@property(retain, nonatomic) NSMutableArray *shareBtns; // @synthesize shareBtns=_shareBtns;
@property(retain, nonatomic) NSMutableArray *filterItems; // @synthesize filterItems=_filterItems;
@property(retain, nonatomic) UIButton *replayBtn; // @synthesize replayBtn=_replayBtn;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *coverView; // @synthesize coverView=_coverView;
@property(retain, nonatomic) UIImageView *bgImageView; // @synthesize bgImageView=_bgImageView;
@property(retain, nonatomic) NSString *bgImageUrl; // @synthesize bgImageUrl=_bgImageUrl;
@property(nonatomic) __weak id <YKFeedEndViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)shareAction:(id)arg1;
- (void)replayAction:(id)arg1;
- (void)layoutSubviews;
- (id)shareButtonWithImage:(id)arg1 title:(id)arg2 forState:(unsigned long long)arg3 tag:(long long)arg4;
- (id)initWithFrame:(struct CGRect)arg1;

@end

