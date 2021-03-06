//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class YKPCardContext;

@interface YKPBaseCard : UIView
{
    UIView *_contentView;
    YKPCardContext *_context;
    UIView *_topMarginView;
}

+ (float)heightWithContext:(id)arg1;
+ (id)reuseIdentifier;
@property(retain, nonatomic) UIView *topMarginView; // @synthesize topMarginView=_topMarginView;
@property(nonatomic) __weak YKPCardContext *context; // @synthesize context=_context;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;
- (void)setupWithContext:(id)arg1;
- (void)layoutSubviews;
- (void)initialize;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

