//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SKTableViewCell.h"

@class NSArray, NSMutableArray, SKVideoView, UIButton, UILabel, ViweTypeCustom_NoResourceBigPersonModel;

@interface ViweTypeCustom_NoResourceBigPersonCell : SKTableViewCell
{
    SKVideoView *_centerCardView;
    ViweTypeCustom_NoResourceBigPersonModel *_personModel;
    UILabel *_areaLabel;
    UILabel *_directorLabel;
    UILabel *_typeLabel;
    UILabel *_actorLabel;
    UILabel *_descLabel;
    NSArray *_nameArr;
    NSMutableArray *_nameLabelArr;
    NSMutableArray *_nameDataArr;
    NSMutableArray *_nameDataLabelArr;
    UIButton *_decFlodBtn;
}

+ (long long)getDescLineCount:(id)arg1;
+ (_Bool)showFoldButton:(id)arg1;
+ (float)getDescHeight:(id)arg1;
+ (float)getCellHeight:(id)arg1;
@property(retain, nonatomic) UIButton *decFlodBtn; // @synthesize decFlodBtn=_decFlodBtn;
@property(retain, nonatomic) NSMutableArray *nameDataLabelArr; // @synthesize nameDataLabelArr=_nameDataLabelArr;
@property(retain, nonatomic) NSMutableArray *nameDataArr; // @synthesize nameDataArr=_nameDataArr;
@property(retain, nonatomic) NSMutableArray *nameLabelArr; // @synthesize nameLabelArr=_nameLabelArr;
@property(retain, nonatomic) NSArray *nameArr; // @synthesize nameArr=_nameArr;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *actorLabel; // @synthesize actorLabel=_actorLabel;
@property(retain, nonatomic) UILabel *typeLabel; // @synthesize typeLabel=_typeLabel;
@property(retain, nonatomic) UILabel *directorLabel; // @synthesize directorLabel=_directorLabel;
@property(retain, nonatomic) UILabel *areaLabel; // @synthesize areaLabel=_areaLabel;
@property(retain, nonatomic) ViweTypeCustom_NoResourceBigPersonModel *personModel; // @synthesize personModel=_personModel;
@property(retain, nonatomic) SKVideoView *centerCardView; // @synthesize centerCardView=_centerCardView;
- (void).cxx_destruct;
- (void)setData:(id)arg1;
- (void)checkAndDoString:(id)arg1;
- (void)setDesLabelInfo:(id)arg1;
- (void)refreshLabelsWithModel:(id)arg1;
- (void)refreshLabels;
- (void)initDataLabels;
- (void)initLabels;
- (long long)tellRowCount;
- (void)goToTop;
- (void)decFlodBtnClick:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

