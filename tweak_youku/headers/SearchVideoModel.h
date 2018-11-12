//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SKBaseModel.h"

@class NSMutableArray, NSString, SKPopLayerModel, SKSearchEggsModel, SearchFilterModel, ViewType19PaintedEggshellModel;

@interface SearchVideoModel : SKBaseModel
{
    _Bool _isEnd;
    _Bool _hasPaintedEggshell;
    NSString *_highlightword;
    long long _pg;
    long long _pz;
    long long _total;
    NSString *_qc_str;
    SKPopLayerModel *_poplayer;
    NSMutableArray *_datas;
    ViewType19PaintedEggshellModel *_PaintedEggshellModel;
    SKSearchEggsModel *_oldSKSearchEggsModel;
    SearchFilterModel *_filterModel;
    NSMutableArray *_showbig_filter;
    NSMutableArray *_showbig_filterCateNames;
    NSMutableArray *_series_filter;
    NSString *_sver;
    NSString *_engine;
    long long _max_group_number;
}

+ (id)parseViewModel:(id)arg1;
+ (_Bool)isContainerType:(long long)arg1;
+ (id)parseViewTypeModelsWithContainer:(id)arg1;
+ (id)parseViewTypeModelsWithOutContainer:(id)arg1;
+ (id)parseViewTypeModels:(id)arg1 highlightword:(id)arg2;
@property(nonatomic) long long max_group_number; // @synthesize max_group_number=_max_group_number;
@property(retain, nonatomic) NSString *engine; // @synthesize engine=_engine;
@property(retain, nonatomic) NSString *sver; // @synthesize sver=_sver;
@property(retain, nonatomic) NSMutableArray *series_filter; // @synthesize series_filter=_series_filter;
@property(retain, nonatomic) NSMutableArray *showbig_filterCateNames; // @synthesize showbig_filterCateNames=_showbig_filterCateNames;
@property(retain, nonatomic) NSMutableArray *showbig_filter; // @synthesize showbig_filter=_showbig_filter;
@property(retain, nonatomic) SearchFilterModel *filterModel; // @synthesize filterModel=_filterModel;
@property(nonatomic) _Bool hasPaintedEggshell; // @synthesize hasPaintedEggshell=_hasPaintedEggshell;
@property(retain, nonatomic) SKSearchEggsModel *oldSKSearchEggsModel; // @synthesize oldSKSearchEggsModel=_oldSKSearchEggsModel;
@property(retain, nonatomic) ViewType19PaintedEggshellModel *PaintedEggshellModel; // @synthesize PaintedEggshellModel=_PaintedEggshellModel;
@property(retain, nonatomic) NSMutableArray *datas; // @synthesize datas=_datas;
@property(retain, nonatomic) SKPopLayerModel *poplayer; // @synthesize poplayer=_poplayer;
@property(retain, nonatomic) NSString *qc_str; // @synthesize qc_str=_qc_str;
@property(nonatomic) long long total; // @synthesize total=_total;
@property(nonatomic) long long pz; // @synthesize pz=_pz;
@property(nonatomic) long long pg; // @synthesize pg=_pg;
@property(nonatomic) _Bool isEnd; // @synthesize isEnd=_isEnd;
@property(retain, nonatomic) NSString *highlightword; // @synthesize highlightword=_highlightword;
- (void).cxx_destruct;
- (void)appendingFromVideoModel:(id)arg1;
- (void)insertQCModel:(id)arg1;
- (id)initUGCBigWordWithDic:(id)arg1;
- (id)initProgramBigWordWithDic:(id)arg1;
- (id)initWithDic:(id)arg1;

@end

