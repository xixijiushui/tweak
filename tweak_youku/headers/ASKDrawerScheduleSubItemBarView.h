//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class ASKDrawerScheduleSubItemBarModel, NSIndexPath, NSString, UIColor, UIImageView;

@interface ASKDrawerScheduleSubItemBarView : UIView
{
    NSString *_drawerIdentifier;
    NSIndexPath *_indexPath;
    id <ASKDrawerScheduleSubItemBarViewDelegate> _delegate;
    ASKDrawerScheduleSubItemBarModel *_model;
    UIColor *_titleColor;
    double _titleFontSize;
    UIColor *_lineColor;
    double _lineWidth;
    double _lineTopGap;
    double _lineBottomGap;
    UIImageView *_backgroundImageView;
}

+ (struct CGSize)drawerSize;
@property(nonatomic) __weak UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(nonatomic) double lineBottomGap; // @synthesize lineBottomGap=_lineBottomGap;
@property(nonatomic) double lineTopGap; // @synthesize lineTopGap=_lineTopGap;
@property(nonatomic) double lineWidth; // @synthesize lineWidth=_lineWidth;
@property(retain, nonatomic) UIColor *lineColor; // @synthesize lineColor=_lineColor;
@property(nonatomic) double titleFontSize; // @synthesize titleFontSize=_titleFontSize;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(retain, nonatomic) ASKDrawerScheduleSubItemBarModel *model; // @synthesize model=_model;
@property(nonatomic) __weak id <ASKDrawerScheduleSubItemBarViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(copy, nonatomic) NSString *drawerIdentifier; // @synthesize drawerIdentifier=_drawerIdentifier;
- (void).cxx_destruct;
- (void)itemButtonDidTouchedAction:(id)arg1;
- (void)createViewWithItems:(id)arg1;
- (void)configWithModel:(id)arg1;
- (void)buildSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)awakeAfterUsingCoder:(id)arg1;

@end

