//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UILabel;

@interface YKLYKLimitView : UIView
{
    long long _limit;
    long long _current;
    UILabel *_countLabel;
}

@property(retain, nonatomic) UILabel *countLabel; // @synthesize countLabel=_countLabel;
@property(nonatomic) long long current; // @synthesize current=_current;
@property(nonatomic) long long limit; // @synthesize limit=_limit;
- (void).cxx_destruct;
- (void)_updateContent;
- (void)_layoutWithRect:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

