//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class CAShapeLayer, NSNumber, NSString, SKPlaySeriesButtonData, SKTextRectViewB, UIImageView, UILabel, UIView;

@interface SKPlaySeriesButton : UIButton
{
    _Bool _used;
    _Bool _isMore;
    _Bool _isBeDisabled;
    _Bool _isReused;
    _Bool _isPlayed;
    _Bool _showDownLine;
    _Bool _showPoint;
    long long _playIndex;
    id _showModel;
    NSString *_showid;
    NSString *_showname;
    NSNumber *_sourceSite;
    NSNumber *_playcontrol;
    SKPlaySeriesButtonData *_buttonData;
    UIImageView *_cornerMark;
    UIView *_downLine;
    UIView *_pointView;
    UILabel *_cView;
    SKTextRectViewB *_kViewB;
    UIImageView *_historyIcon;
    CAShapeLayer *_rLayer;
}

@property(retain, nonatomic) CAShapeLayer *rLayer; // @synthesize rLayer=_rLayer;
@property(retain, nonatomic) UIImageView *historyIcon; // @synthesize historyIcon=_historyIcon;
@property(retain, nonatomic) SKTextRectViewB *kViewB; // @synthesize kViewB=_kViewB;
@property(retain, nonatomic) UILabel *cView; // @synthesize cView=_cView;
@property(retain, nonatomic) UIView *pointView; // @synthesize pointView=_pointView;
@property(retain, nonatomic) UIView *downLine; // @synthesize downLine=_downLine;
@property(retain, nonatomic) UIImageView *cornerMark; // @synthesize cornerMark=_cornerMark;
@property(retain, nonatomic) SKPlaySeriesButtonData *buttonData; // @synthesize buttonData=_buttonData;
@property(retain, nonatomic) NSNumber *playcontrol; // @synthesize playcontrol=_playcontrol;
@property(retain, nonatomic) NSNumber *sourceSite; // @synthesize sourceSite=_sourceSite;
@property(retain, nonatomic) NSString *showname; // @synthesize showname=_showname;
@property(retain, nonatomic) NSString *showid; // @synthesize showid=_showid;
@property(retain, nonatomic) id showModel; // @synthesize showModel=_showModel;
@property(nonatomic) long long playIndex; // @synthesize playIndex=_playIndex;
@property(nonatomic) _Bool showPoint; // @synthesize showPoint=_showPoint;
@property(nonatomic) _Bool showDownLine; // @synthesize showDownLine=_showDownLine;
@property(nonatomic) _Bool isPlayed; // @synthesize isPlayed=_isPlayed;
@property(nonatomic) _Bool isReused; // @synthesize isReused=_isReused;
@property(nonatomic) _Bool isBeDisabled; // @synthesize isBeDisabled=_isBeDisabled;
@property(nonatomic) _Bool isMore; // @synthesize isMore=_isMore;
@property(nonatomic) _Bool used; // @synthesize used=_used;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithShow:(id)arg1;
- (id)init;

@end

