//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class SKTopicSubModel, UILabel;

@interface TopicView : UIView
{
    UILabel *_label1;
    UILabel *_label2;
    SKTopicSubModel *_smode;
}

@property(retain, nonatomic) SKTopicSubModel *smode; // @synthesize smode=_smode;
@property(retain, nonatomic) UILabel *label2; // @synthesize label2=_label2;
@property(retain, nonatomic) UILabel *label1; // @synthesize label1=_label1;
- (void).cxx_destruct;
- (id)getColorWithIndex:(long long)arg1;
- (void)setTitle:(id)arg1 colorIndex:(long long)arg2;
- (void)setTitle:(id)arg1 hilight:(id)arg2 fullwidth:(_Bool)arg3;
- (id)createLabel;
- (id)initWithFrame:(struct CGRect)arg1;

@end

