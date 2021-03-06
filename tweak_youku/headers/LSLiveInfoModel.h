//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "LSLiveStateDelegate.h"
#import "LSParser.h"
#import "LSSubscribeBodyDelegate.h"

@class LSADPositionModel, LSDetailBrandModel, LSDetailCustomItem, LSLivePlayInfoModel, LSLiveTopicModel, LSTmallItem, NSArray, NSDictionary, NSMutableArray, NSString;

@interface LSLiveInfoModel : NSObject <LSParser, LSSubscribeBodyDelegate, LSLiveStateDelegate>
{
    double timeStampSnapShot;
    _Bool _timeShift;
    _Bool _issub;
    _Bool _isshow_ad_cornnermark;
    _Bool _isshow_livenotice_count;
    _Bool _isshow_usercount;
    _Bool _isPlay;
    _Bool _isshow_livedoc;
    _Bool _isrecommend;
    _Bool _isgift;
    _Bool _isImmediatelyDisplayChat;
    _Bool _displayCompere;
    _Bool _pmsgSwitch;
    _Bool _landScape;
    _Bool _interceptDycGift;
    _Bool _showCustomTab;
    _Bool _hasFullscreenInteraction;
    LSLiveTopicModel *_topic;
    NSDictionary *_mainData;
    NSString *_live_id;
    NSString *_name;
    NSString *_liveDescription;
    long long _sub_count;
    long long _now;
    NSString *_state;
    long long _start_timestamp;
    long long _end_timestamp;
    NSString *_start_time;
    NSString *_start_time_zh;
    NSString *_end_time;
    NSString *_link_url;
    NSString *_img_m_url;
    NSString *_img_b_url;
    NSString *_player;
    NSString *_broadcast_video_code;
    NSString *_change_video;
    NSString *_piece_video;
    long long _online_count;
    unsigned long long _playerStatus;
    long long _hotCount;
    NSString *_start_time_format;
    NSString *_end_time_format;
    long long _warmup_end_timestamp;
    NSString *_compere;
    NSString *_screenid;
    NSString *_adEntryLinkUrl;
    NSString *_adEntryStartTime;
    NSString *_adEntryEndTime;
    double _timeStamp;
    NSArray *_user;
    NSArray *_stream;
    NSArray *_related;
    NSDictionary *_endLive;
    LSLivePlayInfoModel *_playInfo;
    NSArray *_relatedVideoArray;
    unsigned long long _bulletType;
    NSArray *_endLives;
    NSArray *_preLives;
    NSArray *_popItems;
    NSArray *_bullets;
    NSArray *_customBanners;
    LSDetailCustomItem *_customItem;
    LSDetailCustomItem *_customItem2;
    NSString *_detailBackImageURL;
    NSString *_roomid;
    LSTmallItem *_tmallItem;
    unsigned long long _sceneType;
    NSArray *_fixInteractionADArray;
    NSArray *_interactionADArray;
    NSString *_liveUUID;
    NSString *_lfRoomId;
    long long _dingCount;
    NSString *_source;
    NSString *_categoryName;
    NSString *_categoryId;
    NSString *_img11Url;
    NSString *_clientIp;
    long long _videoId;
    long long _showId;
    LSDetailBrandModel *_brand;
    NSArray *_comperes;
    LSADPositionModel *_adPosition;
    NSString *_subButtonText;
    NSMutableArray *_watchs;
    NSMutableArray *_watchPoint;
    long long _dsVideoDuration;
    NSString *_wid;
}

+ (_Bool)hasFullscreenInteractionByOrange:(id)arg1;
@property(nonatomic) _Bool hasFullscreenInteraction; // @synthesize hasFullscreenInteraction=_hasFullscreenInteraction;
@property(retain, nonatomic) NSString *wid; // @synthesize wid=_wid;
@property(nonatomic) long long dsVideoDuration; // @synthesize dsVideoDuration=_dsVideoDuration;
@property(retain, nonatomic) NSMutableArray *watchPoint; // @synthesize watchPoint=_watchPoint;
@property(retain, nonatomic) NSMutableArray *watchs; // @synthesize watchs=_watchs;
@property(copy, nonatomic) NSString *subButtonText; // @synthesize subButtonText=_subButtonText;
@property(retain, nonatomic) LSADPositionModel *adPosition; // @synthesize adPosition=_adPosition;
@property(retain, nonatomic) NSArray *comperes; // @synthesize comperes=_comperes;
@property(retain, nonatomic) LSDetailBrandModel *brand; // @synthesize brand=_brand;
@property(nonatomic) _Bool showCustomTab; // @synthesize showCustomTab=_showCustomTab;
@property(nonatomic) _Bool interceptDycGift; // @synthesize interceptDycGift=_interceptDycGift;
@property(nonatomic) long long showId; // @synthesize showId=_showId;
@property(nonatomic) long long videoId; // @synthesize videoId=_videoId;
@property(copy, nonatomic) NSString *clientIp; // @synthesize clientIp=_clientIp;
@property(copy, nonatomic) NSString *img11Url; // @synthesize img11Url=_img11Url;
@property(nonatomic) _Bool landScape; // @synthesize landScape=_landScape;
@property(copy, nonatomic) NSString *categoryId; // @synthesize categoryId=_categoryId;
@property(copy, nonatomic) NSString *categoryName; // @synthesize categoryName=_categoryName;
@property(copy, nonatomic) NSString *source; // @synthesize source=_source;
@property(nonatomic) long long dingCount; // @synthesize dingCount=_dingCount;
@property(nonatomic) _Bool pmsgSwitch; // @synthesize pmsgSwitch=_pmsgSwitch;
@property(nonatomic) _Bool displayCompere; // @synthesize displayCompere=_displayCompere;
@property(copy, nonatomic) NSString *lfRoomId; // @synthesize lfRoomId=_lfRoomId;
@property(copy, nonatomic) NSString *liveUUID; // @synthesize liveUUID=_liveUUID;
@property(retain, nonatomic) NSArray *interactionADArray; // @synthesize interactionADArray=_interactionADArray;
@property(retain, nonatomic) NSArray *fixInteractionADArray; // @synthesize fixInteractionADArray=_fixInteractionADArray;
@property(nonatomic) unsigned long long sceneType; // @synthesize sceneType=_sceneType;
@property(nonatomic) _Bool isImmediatelyDisplayChat; // @synthesize isImmediatelyDisplayChat=_isImmediatelyDisplayChat;
@property(retain, nonatomic) LSTmallItem *tmallItem; // @synthesize tmallItem=_tmallItem;
@property(nonatomic) _Bool isgift; // @synthesize isgift=_isgift;
@property(nonatomic) _Bool isrecommend; // @synthesize isrecommend=_isrecommend;
@property(copy, nonatomic) NSString *roomid; // @synthesize roomid=_roomid;
@property(copy, nonatomic) NSString *detailBackImageURL; // @synthesize detailBackImageURL=_detailBackImageURL;
@property(retain, nonatomic) LSDetailCustomItem *customItem2; // @synthesize customItem2=_customItem2;
@property(retain, nonatomic) LSDetailCustomItem *customItem; // @synthesize customItem=_customItem;
@property(retain, nonatomic) NSArray *customBanners; // @synthesize customBanners=_customBanners;
@property(retain, nonatomic) NSArray *bullets; // @synthesize bullets=_bullets;
@property(retain, nonatomic) NSArray *popItems; // @synthesize popItems=_popItems;
@property(retain, nonatomic) NSArray *preLives; // @synthesize preLives=_preLives;
@property(retain, nonatomic) NSArray *endLives; // @synthesize endLives=_endLives;
@property(nonatomic) unsigned long long bulletType; // @synthesize bulletType=_bulletType;
@property(retain, nonatomic) NSArray *relatedVideoArray; // @synthesize relatedVideoArray=_relatedVideoArray;
@property(retain, nonatomic) LSLivePlayInfoModel *playInfo; // @synthesize playInfo=_playInfo;
@property(retain, nonatomic) NSDictionary *endLive; // @synthesize endLive=_endLive;
@property(retain, nonatomic) NSArray *related; // @synthesize related=_related;
@property(retain, nonatomic) NSArray *stream; // @synthesize stream=_stream;
@property(retain, nonatomic) NSArray *user; // @synthesize user=_user;
@property(nonatomic) double timeStamp; // @synthesize timeStamp=_timeStamp;
@property(copy, nonatomic) NSString *adEntryEndTime; // @synthesize adEntryEndTime=_adEntryEndTime;
@property(copy, nonatomic) NSString *adEntryStartTime; // @synthesize adEntryStartTime=_adEntryStartTime;
@property(copy, nonatomic) NSString *adEntryLinkUrl; // @synthesize adEntryLinkUrl=_adEntryLinkUrl;
@property(copy, nonatomic) NSString *screenid; // @synthesize screenid=_screenid;
@property(copy, nonatomic) NSString *compere; // @synthesize compere=_compere;
@property(nonatomic) long long warmup_end_timestamp; // @synthesize warmup_end_timestamp=_warmup_end_timestamp;
@property(nonatomic) _Bool isshow_livedoc; // @synthesize isshow_livedoc=_isshow_livedoc;
@property(copy, nonatomic) NSString *end_time_format; // @synthesize end_time_format=_end_time_format;
@property(copy, nonatomic) NSString *start_time_format; // @synthesize start_time_format=_start_time_format;
@property(nonatomic) long long hotCount; // @synthesize hotCount=_hotCount;
@property(nonatomic) unsigned long long playerStatus; // @synthesize playerStatus=_playerStatus;
@property(nonatomic) _Bool isPlay; // @synthesize isPlay=_isPlay;
@property(nonatomic) _Bool isshow_usercount; // @synthesize isshow_usercount=_isshow_usercount;
@property(nonatomic) long long online_count; // @synthesize online_count=_online_count;
@property(retain, nonatomic) NSString *piece_video; // @synthesize piece_video=_piece_video;
@property(retain, nonatomic) NSString *change_video; // @synthesize change_video=_change_video;
@property(retain, nonatomic) NSString *broadcast_video_code; // @synthesize broadcast_video_code=_broadcast_video_code;
@property(retain, nonatomic) NSString *player; // @synthesize player=_player;
@property(retain, nonatomic) NSString *img_b_url; // @synthesize img_b_url=_img_b_url;
@property(retain, nonatomic) NSString *img_m_url; // @synthesize img_m_url=_img_m_url;
@property(retain, nonatomic) NSString *link_url; // @synthesize link_url=_link_url;
@property(retain, nonatomic) NSString *end_time; // @synthesize end_time=_end_time;
@property(retain, nonatomic) NSString *start_time_zh; // @synthesize start_time_zh=_start_time_zh;
@property(retain, nonatomic) NSString *start_time; // @synthesize start_time=_start_time;
@property(nonatomic) long long end_timestamp; // @synthesize end_timestamp=_end_timestamp;
@property(nonatomic) long long start_timestamp; // @synthesize start_timestamp=_start_timestamp;
@property(retain, nonatomic) NSString *state; // @synthesize state=_state;
@property(nonatomic) long long now; // @synthesize now=_now;
@property(nonatomic) _Bool isshow_livenotice_count; // @synthesize isshow_livenotice_count=_isshow_livenotice_count;
@property(nonatomic) long long sub_count; // @synthesize sub_count=_sub_count;
@property(nonatomic) _Bool isshow_ad_cornnermark; // @synthesize isshow_ad_cornnermark=_isshow_ad_cornnermark;
@property(nonatomic) _Bool issub; // @synthesize issub=_issub;
@property(retain, nonatomic) NSString *liveDescription; // @synthesize liveDescription=_liveDescription;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *live_id; // @synthesize live_id=_live_id;
@property(retain, nonatomic) NSDictionary *mainData; // @synthesize mainData=_mainData;
@property(nonatomic) _Bool timeShift; // @synthesize timeShift=_timeShift;
@property(retain, nonatomic) LSLiveTopicModel *topic; // @synthesize topic=_topic;
- (void).cxx_destruct;
- (_Bool)hasADPosition;
- (_Bool)hasBrand;
- (id)preliveVideoid;
- (id)endliveVideoid;
- (unsigned long long)playerTypeByTime;
- (unsigned long long)playerRealType;
- (unsigned long long)playerType;
- (unsigned long long)liveState;
- (_Bool)playNeedVip;
- (id)liveShareContent;
- (id)liveShareUrl;
- (id)liveShareImage;
- (id)liveStartTimeStr;
- (id)liveid;
- (id)liveNoticeMessage;
- (double)liveEndTime;
- (double)liveStartTime;
- (_Bool)hasTmallIcon;
- (long long)defaultStreamIndex;
- (_Bool)displayEndVideo;
- (_Bool)displayRelateVideo;
- (_Bool)displayBulletScreen;
- (_Bool)hasChatInPlayer;
- (_Bool)hasWordLive;
- (_Bool)hasCustomItem;
- (_Bool)hasBulletScreen;
- (_Bool)hasRelatedVideo;
- (_Bool)hasPreLiveVideo;
- (void)parsePreLiveVideo:(id)arg1;
- (_Bool)hasMutiCamera;
- (void)parseEndLiveVideo:(id)arg1;
- (void)parseRelatedVideo:(id)arg1;
- (_Bool)isPreWarn;
- (_Bool)displayPreWarnImage;
- (void)parsePopItems:(id)arg1;
- (void)dateFormat:(id)arg1;
- (id)isNull:(id)arg1;
- (_Bool)shouldInterceptDynamicGift;
- (void)parseMyObject:(id)arg1;
- (void)parseObject:(id)arg1;
- (id)init;
- (id)watchPeopleInfo;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

