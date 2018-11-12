//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIImageView, UILabel, UITextField, UIView;

@interface YKBCChatCell : UITableViewCell
{
    UIImageView *_userImageView;
    UIView *_rightView;
    UILabel *_labelNickName;
    UILabel *_labelLimitTime;
    UILabel *_labelContent;
    UITextField *_txtContent;
    UILabel *_labelRole;
}

@property(retain, nonatomic) UILabel *labelRole; // @synthesize labelRole=_labelRole;
@property(retain, nonatomic) UITextField *txtContent; // @synthesize txtContent=_txtContent;
@property(retain, nonatomic) UILabel *labelContent; // @synthesize labelContent=_labelContent;
@property(retain, nonatomic) UILabel *labelLimitTime; // @synthesize labelLimitTime=_labelLimitTime;
@property(retain, nonatomic) UILabel *labelNickName; // @synthesize labelNickName=_labelNickName;
@property(retain, nonatomic) UIView *rightView; // @synthesize rightView=_rightView;
@property(retain, nonatomic) UIImageView *userImageView; // @synthesize userImageView=_userImageView;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;

@end
