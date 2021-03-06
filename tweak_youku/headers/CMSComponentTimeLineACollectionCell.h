//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

#import "CMSComponentCellProtocol.h"
#import "CardVideoViewDelegate.h"
#import "VIPSubscribeViewDelegate.h"

@class CMSCardVideo, NSString, UILabel, VIPSubscribeView, YKVIPTimeLineCardVideoView;

@interface CMSComponentTimeLineACollectionCell : UICollectionViewCell <CMSComponentCellProtocol, CardVideoViewDelegate, VIPSubscribeViewDelegate>
{
    _Bool _reservation;
    YKVIPTimeLineCardVideoView *_cardVideoView;
    CMSCardVideo *_cardVideo;
    VIPSubscribeView *_subscribeView;
    NSString *_title;
    NSString *_subTitle;
    UILabel *_titleLabel;
    UILabel *_subLabel;
    NSString *_showId;
}

@property(retain, nonatomic) NSString *showId; // @synthesize showId=_showId;
@property(retain, nonatomic) UILabel *subLabel; // @synthesize subLabel=_subLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) _Bool reservation; // @synthesize reservation=_reservation;
@property(retain, nonatomic) VIPSubscribeView *subscribeView; // @synthesize subscribeView=_subscribeView;
@property(retain, nonatomic) CMSCardVideo *cardVideo; // @synthesize cardVideo=_cardVideo;
@property(retain, nonatomic) YKVIPTimeLineCardVideoView *cardVideoView; // @synthesize cardVideoView=_cardVideoView;
- (void).cxx_destruct;
- (void)dealloc;
- (void)refreshReservation:(id)arg1;
- (void)subscribeViewClickAppoint:(id)arg1 isAppoint:(_Bool)arg2;
- (void)cardVideoViewDidSelectVideo:(id)arg1;
- (void)refreshReservation;
- (void)setupModel:(id)arg1;
- (id)dateDisplayFormat:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

