//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class UIButton, UILabel;

@interface LSWordLiveTitleCell : UICollectionViewCell
{
    UILabel *_textLabel;
    UILabel *_subTitleLabel;
    UIButton *_enterButton;
}

@property(retain, nonatomic) UIButton *enterButton; // @synthesize enterButton=_enterButton;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
- (void).cxx_destruct;
- (void)enterButonTapped:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
