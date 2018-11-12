//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSDictionary, UIImageView, UILabel, YKVIPIdentifyDataModel;

@interface YKVIPIdentityCompositeView : UIView
{
    YKVIPIdentifyDataModel *_identityModel;
    CDUnknownBlockType _compositeViewTapBlock;
    UIImageView *_headView;
    UIImageView *_borderView;
    UILabel *_gradeLabel;
    UILabel *_identityLabel;
    NSDictionary *_identifySkinConfigDict;
}

+ (id)identifyCompositeViewWithIdentifyModel:(id)arg1;
@property(retain, nonatomic) NSDictionary *identifySkinConfigDict; // @synthesize identifySkinConfigDict=_identifySkinConfigDict;
@property(retain, nonatomic) UILabel *identityLabel; // @synthesize identityLabel=_identityLabel;
@property(retain, nonatomic) UILabel *gradeLabel; // @synthesize gradeLabel=_gradeLabel;
@property(retain, nonatomic) UIImageView *borderView; // @synthesize borderView=_borderView;
@property(retain, nonatomic) UIImageView *headView; // @synthesize headView=_headView;
@property(copy, nonatomic) CDUnknownBlockType compositeViewTapBlock; // @synthesize compositeViewTapBlock=_compositeViewTapBlock;
@property(retain, nonatomic) YKVIPIdentifyDataModel *identityModel; // @synthesize identityModel=_identityModel;
- (void).cxx_destruct;
- (void)applyTheme;
- (void)tapMe;
- (void)refreshCompositeView;
- (void)reloadHeaderView;
- (void)applySkinWithIdentityType:(long long)arg1;
- (void)changeViewZIndex;
- (void)reloadCompositeView;
- (void)reloadWithIdentityModel:(id)arg1;
- (void)readSkinConfig;
- (id)initWithFrame:(struct CGRect)arg1;

@end

