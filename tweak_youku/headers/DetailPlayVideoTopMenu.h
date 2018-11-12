//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class DetailContent, NSMutableArray, UILabel, UIScrollView;

@interface DetailPlayVideoTopMenu : UIView
{
    id <DetailPlayVideoTopMenuDelegate> _delegate;
    DetailContent *_content;
    long long _selectedIndex;
    NSMutableArray *_tapAreaLabelArray;
    UILabel *_redPoint;
    UIView *_moveLine;
    UIScrollView *_scrollView;
}

@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UIView *moveLine; // @synthesize moveLine=_moveLine;
@property(retain, nonatomic) UILabel *redPoint; // @synthesize redPoint=_redPoint;
@property(retain, nonatomic) NSMutableArray *tapAreaLabelArray; // @synthesize tapAreaLabelArray=_tapAreaLabelArray;
@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(nonatomic) __weak DetailContent *content; // @synthesize content=_content;
@property(nonatomic) __weak id <DetailPlayVideoTopMenuDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)selectedByIndex:(id)arg1;
- (void)setRedPointNumber:(long long)arg1;
- (void)setupViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

