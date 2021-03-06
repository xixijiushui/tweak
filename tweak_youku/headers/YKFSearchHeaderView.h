//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class RACCommand, UIButton, UILabel;

@interface YKFSearchHeaderView : UIView
{
    UIView *_topSeparateLine;
    UILabel *_headerTitleLabel;
    UIButton *_clearButton;
    UILabel *_clearLabel;
    RACCommand *_clearCommand;
}

@property(retain, nonatomic) RACCommand *clearCommand; // @synthesize clearCommand=_clearCommand;
@property(nonatomic) __weak UILabel *clearLabel; // @synthesize clearLabel=_clearLabel;
@property(nonatomic) __weak UIButton *clearButton; // @synthesize clearButton=_clearButton;
@property(nonatomic) __weak UILabel *headerTitleLabel; // @synthesize headerTitleLabel=_headerTitleLabel;
@property(nonatomic) __weak UIView *topSeparateLine; // @synthesize topSeparateLine=_topSeparateLine;
- (void).cxx_destruct;
- (void)clearAction;
- (void)awakeFromNib;

@end

