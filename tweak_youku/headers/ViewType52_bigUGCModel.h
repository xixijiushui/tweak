//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ViewTypeBaseModel.h"

@class NSMutableArray, NSString, ViewType26_BottomWithRightArrowModel, ViewType42ShowsModel, ViewTypeCustom_bigUGCTitleModel;

@interface ViewType52_bigUGCModel : ViewTypeBaseModel
{
    NSString *_title;
    NSString *_u_title;
    NSString *_u_subTitle;
    ViewType42ShowsModel *_hModel;
    ViewType26_BottomWithRightArrowModel *_footerModel;
    ViewTypeCustom_bigUGCTitleModel *_headerModel;
    NSString *_area_bottom_title;
    NSMutableArray *_tabOneArr;
    NSMutableArray *_tabTwoArr;
    NSMutableArray *_tabOutArr;
    NSString *_jumAllStr;
    NSString *_jumSeleStr;
}

@property(retain, nonatomic) NSString *jumSeleStr; // @synthesize jumSeleStr=_jumSeleStr;
@property(retain, nonatomic) NSString *jumAllStr; // @synthesize jumAllStr=_jumAllStr;
@property(retain, nonatomic) NSMutableArray *tabOutArr; // @synthesize tabOutArr=_tabOutArr;
@property(retain, nonatomic) NSMutableArray *tabTwoArr; // @synthesize tabTwoArr=_tabTwoArr;
@property(retain, nonatomic) NSMutableArray *tabOneArr; // @synthesize tabOneArr=_tabOneArr;
@property(copy, nonatomic) NSString *area_bottom_title; // @synthesize area_bottom_title=_area_bottom_title;
@property(retain, nonatomic) ViewTypeCustom_bigUGCTitleModel *headerModel; // @synthesize headerModel=_headerModel;
@property(retain, nonatomic) ViewType26_BottomWithRightArrowModel *footerModel; // @synthesize footerModel=_footerModel;
@property(retain, nonatomic) ViewType42ShowsModel *hModel; // @synthesize hModel=_hModel;
@property(retain, nonatomic) NSString *u_subTitle; // @synthesize u_subTitle=_u_subTitle;
@property(retain, nonatomic) NSString *u_title; // @synthesize u_title=_u_title;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)parseStatisticsParam;
- (id)getTagValueWithS1:(id)arg1 andS2:(id)arg2;
- (id)initWithDic:(id)arg1;

@end

