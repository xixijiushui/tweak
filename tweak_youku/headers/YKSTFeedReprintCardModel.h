//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSAttributedString, NSMutableAttributedString, NSString, YKSTFeedModel;

@interface YKSTFeedReprintCardModel : NSObject
{
    YKSTFeedModel *_sourceModel;
    NSMutableAttributedString *_transmitAttr;
    NSAttributedString *_titleAttr;
    double _bodyH;
    NSString *_title;
    struct CGRect _transmitAreaF;
    struct CGRect _transmitTitleF;
    struct CGRect _titleF;
    struct CGRect _coverF;
}

@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) struct CGRect coverF; // @synthesize coverF=_coverF;
@property(nonatomic) struct CGRect titleF; // @synthesize titleF=_titleF;
@property(nonatomic) double bodyH; // @synthesize bodyH=_bodyH;
@property(retain, nonatomic) NSAttributedString *titleAttr; // @synthesize titleAttr=_titleAttr;
@property(nonatomic) struct CGRect transmitTitleF; // @synthesize transmitTitleF=_transmitTitleF;
@property(nonatomic) struct CGRect transmitAreaF; // @synthesize transmitAreaF=_transmitAreaF;
@property(retain, nonatomic) NSMutableAttributedString *transmitAttr; // @synthesize transmitAttr=_transmitAttr;
@property(retain, nonatomic) YKSTFeedModel *sourceModel; // @synthesize sourceModel=_sourceModel;
- (void).cxx_destruct;
- (struct CGSize)renderSize4Player;
- (void)layoutBody;
- (void)layoutImage;
- (void)layoutTitle1;
- (void)layoutTitle;
- (void)setupWithCMSInfo:(id)arg1;

@end
