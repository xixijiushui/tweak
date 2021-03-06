//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class AliRecordProgressView, NSMutableArray;

@interface AliRecordProgressBar : UIView
{
    _Bool _pause;
    _Bool _prepared;
    double _progress;
    double _minRecordProgress;
    double _maxRecordMaxTime;
    CDUnknownBlockType _completeBlock;
    AliRecordProgressView *_progressView;
    NSMutableArray *_points;
    NSMutableArray *_autoPoints;
    UIView *_tipView;
}

@property(retain, nonatomic) UIView *tipView; // @synthesize tipView=_tipView;
@property(retain, nonatomic) NSMutableArray *autoPoints; // @synthesize autoPoints=_autoPoints;
@property(retain, nonatomic) NSMutableArray *points; // @synthesize points=_points;
@property(retain, nonatomic) AliRecordProgressView *progressView; // @synthesize progressView=_progressView;
@property(nonatomic) _Bool prepared; // @synthesize prepared=_prepared;
@property(copy, nonatomic) CDUnknownBlockType completeBlock; // @synthesize completeBlock=_completeBlock;
@property(nonatomic) _Bool pause; // @synthesize pause=_pause;
@property(nonatomic) double maxRecordMaxTime; // @synthesize maxRecordMaxTime=_maxRecordMaxTime;
@property(nonatomic) double minRecordProgress; // @synthesize minRecordProgress=_minRecordProgress;
@property(nonatomic) double progress; // @synthesize progress=_progress;
- (void).cxx_destruct;
- (void)clean;
- (void)refreshAllAutoPoints;
- (void)addAutoPausePoints:(id)arg1 withMaxRecordTime:(double)arg2;
- (void)removeAllAutoPausePoint;
- (void)removePausePoint;
- (void)removeAutoPausePoint;
- (void)addPausePoint;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

