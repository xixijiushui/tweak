//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableArray, YKSTButtonMenuItem;

@interface YKSTUnlikeButton : UIView
{
    NSMutableArray *_titleArray;
    YKSTButtonMenuItem *_typeForItem;
    NSMutableArray *_selectedArray;
    id <YKSTUnlikeButtonClickDelegate> _delegate;
    long long _numberOfline;
    NSMutableArray *_itemsArray;
}

@property(retain, nonatomic) NSMutableArray *itemsArray; // @synthesize itemsArray=_itemsArray;
@property(nonatomic) long long numberOfline; // @synthesize numberOfline=_numberOfline;
@property(nonatomic) __weak id <YKSTUnlikeButtonClickDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableArray *selectedArray; // @synthesize selectedArray=_selectedArray;
@property(retain, nonatomic) YKSTButtonMenuItem *typeForItem; // @synthesize typeForItem=_typeForItem;
@property(retain, nonatomic) NSMutableArray *titleArray; // @synthesize titleArray=_titleArray;
- (void).cxx_destruct;
- (id)creatImageWithColor:(id)arg1;
- (void)buttonClick:(id)arg1;
- (void)initSubViews;
- (id)initWithTitleArray:(id)arg1 menuItemStyle:(id)arg2 viewFrame:(struct CGRect)arg3;
- (id)initWithTitleArray:(id)arg1 menuItemStyle:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

