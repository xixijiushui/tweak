//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSNumber, NSString;

@interface DetailModel : NSObject
{
    _Bool _isFavorite;
    _Bool _hasTRackNotice;
    _Bool _isUGC;
    _Bool _like_disable;
    _Bool _shareEnable;
    _Bool _commentEnable;
    _Bool _voteEnable;
    _Bool _collapseSubscribeCard;
    _Bool _isExpandSwitch;
    _Bool _panoramaVideo;
    _Bool _sinaCooperationVideo;
    _Bool _showOperationWords;
    _Bool _isShowCountDown;
    _Bool _timeSwith;
    _Bool _isShowDayCountDown;
    _Bool _isCountDownLoadFinished;
    int _interface;
    int _video_right_type;
    NSString *_title;
    NSString *_vid;
    NSString *_sid;
    NSString *_sct;
    NSString *_cid;
    NSString *_channelID;
    NSArray *_showalias;
    NSString *_showDate;
    NSString *_showDateYK;
    NSString *_copyright_status;
    NSString *_copyright_status_tudou;
    NSString *_copyright_status_tmall;
    unsigned long long _cats_id;
    NSArray *_showkind;
    NSString *_firstepisode_videotitle;
    NSString *_episode_collected;
    long long _seriesid;
    NSString *_youku_userid;
    NSArray *_hasvideotype;
    long long _seriesSubscribeType;
    long long _trackAllowStatus;
    long long _videoTypeCode;
    NSDictionary *_utparam;
    NSDictionary *_sourceUtparam;
    NSString *_trackNotice;
    NSArray *_animeEdition;
    NSString *_showCategory;
    NSString *_icrsToday;
    NSArray *_production;
    NSString *_uploader;
    NSString *_releaseDate;
    NSString *_favCount;
    NSString *_collectCount;
    NSString *_ykNum;
    NSArray *_detailLanguage;
    NSString *_duration;
    NSNumber *_completed;
    NSDictionary *_relationShip;
    NSString *_ugc_title;
    NSArray *_station;
    NSString *_reportURL;
    NSString *_rating;
    NSString *_dbRating;
    NSArray *_area;
    NSString *_cat;
    NSArray *_genre;
    NSArray *_director;
    NSArray *_performer;
    NSArray *_host;
    NSArray *_voice;
    NSArray *_original;
    NSString *_video_title;
    NSString *_desc;
    NSArray *_topics;
    NSString *_totalUp;
    NSDictionary *_firstLine;
    NSArray *_secondeLine;
    NSDictionary *_thirdLine;
    NSDictionary *_mark;
    NSArray *_subtitles;
    NSString *_text;
    NSArray *_language;
    NSString *_totalVV;
    NSString *_cmtCount;
    NSString *_format;
    NSString *_thumb;
    long long _publicType;
    NSString *_uid;
    long long _totalEpisode;
    long long _limit;
    NSString *_img;
    NSString *_sinaAt;
    NSString *_sinaTopic;
    NSString *_intro;
    NSString *_playListId;
    NSString *_avgPlayNum;
    NSString *_update;
    NSString *_subTitle;
    NSDictionary *_dic;
    NSString *_releaseNotice;
    NSString *_releaseTime;
    NSString *_serverTime;
    NSString *_episodeVideoId;
    NSString *_releaseNomarlNotice;
    NSString *_releaseButtonNotice;
    long long _detailTimeCountDownType;
    NSString *_releaseAge;
    NSString *_updateInfo;
}

+ (id)parseJson:(id)arg1;
@property(copy, nonatomic) NSString *updateInfo; // @synthesize updateInfo=_updateInfo;
@property(copy, nonatomic) NSString *releaseAge; // @synthesize releaseAge=_releaseAge;
@property(nonatomic) long long detailTimeCountDownType; // @synthesize detailTimeCountDownType=_detailTimeCountDownType;
@property(copy, nonatomic) NSString *releaseButtonNotice; // @synthesize releaseButtonNotice=_releaseButtonNotice;
@property(copy, nonatomic) NSString *releaseNomarlNotice; // @synthesize releaseNomarlNotice=_releaseNomarlNotice;
@property(copy, nonatomic) NSString *episodeVideoId; // @synthesize episodeVideoId=_episodeVideoId;
@property(copy, nonatomic) NSString *serverTime; // @synthesize serverTime=_serverTime;
@property(copy, nonatomic) NSString *releaseTime; // @synthesize releaseTime=_releaseTime;
@property(copy, nonatomic) NSString *releaseNotice; // @synthesize releaseNotice=_releaseNotice;
@property(nonatomic) _Bool isCountDownLoadFinished; // @synthesize isCountDownLoadFinished=_isCountDownLoadFinished;
@property(nonatomic) _Bool isShowDayCountDown; // @synthesize isShowDayCountDown=_isShowDayCountDown;
@property(nonatomic) _Bool timeSwith; // @synthesize timeSwith=_timeSwith;
@property(nonatomic) _Bool isShowCountDown; // @synthesize isShowCountDown=_isShowCountDown;
@property(nonatomic) _Bool showOperationWords; // @synthesize showOperationWords=_showOperationWords;
@property(retain, nonatomic) NSDictionary *dic; // @synthesize dic=_dic;
@property(copy, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(copy, nonatomic) NSString *update; // @synthesize update=_update;
@property(copy, nonatomic) NSString *avgPlayNum; // @synthesize avgPlayNum=_avgPlayNum;
@property(retain, nonatomic) NSString *playListId; // @synthesize playListId=_playListId;
@property(retain, nonatomic) NSString *intro; // @synthesize intro=_intro;
@property(retain, nonatomic) NSString *sinaTopic; // @synthesize sinaTopic=_sinaTopic;
@property(retain, nonatomic) NSString *sinaAt; // @synthesize sinaAt=_sinaAt;
@property(copy, nonatomic) NSString *img; // @synthesize img=_img;
@property(nonatomic) _Bool sinaCooperationVideo; // @synthesize sinaCooperationVideo=_sinaCooperationVideo;
@property(nonatomic) _Bool panoramaVideo; // @synthesize panoramaVideo=_panoramaVideo;
@property(nonatomic) long long limit; // @synthesize limit=_limit;
@property(nonatomic) long long totalEpisode; // @synthesize totalEpisode=_totalEpisode;
@property(copy, nonatomic) NSString *uid; // @synthesize uid=_uid;
@property(nonatomic) long long publicType; // @synthesize publicType=_publicType;
@property(copy, nonatomic) NSString *thumb; // @synthesize thumb=_thumb;
@property(copy, nonatomic) NSString *format; // @synthesize format=_format;
@property(copy, nonatomic) NSString *cmtCount; // @synthesize cmtCount=_cmtCount;
@property(copy, nonatomic) NSString *totalVV; // @synthesize totalVV=_totalVV;
@property(retain, nonatomic) NSArray *language; // @synthesize language=_language;
@property(nonatomic) _Bool isExpandSwitch; // @synthesize isExpandSwitch=_isExpandSwitch;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) NSArray *subtitles; // @synthesize subtitles=_subtitles;
@property(retain, nonatomic) NSDictionary *mark; // @synthesize mark=_mark;
@property(retain, nonatomic) NSDictionary *thirdLine; // @synthesize thirdLine=_thirdLine;
@property(retain, nonatomic) NSArray *secondeLine; // @synthesize secondeLine=_secondeLine;
@property(retain, nonatomic) NSDictionary *firstLine; // @synthesize firstLine=_firstLine;
@property(nonatomic) _Bool collapseSubscribeCard; // @synthesize collapseSubscribeCard=_collapseSubscribeCard;
@property(retain, nonatomic) NSString *totalUp; // @synthesize totalUp=_totalUp;
@property(nonatomic) _Bool voteEnable; // @synthesize voteEnable=_voteEnable;
@property(nonatomic) _Bool commentEnable; // @synthesize commentEnable=_commentEnable;
@property(nonatomic) _Bool shareEnable; // @synthesize shareEnable=_shareEnable;
@property(nonatomic) int video_right_type; // @synthesize video_right_type=_video_right_type;
@property(retain, nonatomic) NSArray *topics; // @synthesize topics=_topics;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *video_title; // @synthesize video_title=_video_title;
@property(retain, nonatomic) NSArray *original; // @synthesize original=_original;
@property(retain, nonatomic) NSArray *voice; // @synthesize voice=_voice;
@property(retain, nonatomic) NSArray *host; // @synthesize host=_host;
@property(retain, nonatomic) NSArray *performer; // @synthesize performer=_performer;
@property(retain, nonatomic) NSArray *director; // @synthesize director=_director;
@property(retain, nonatomic) NSArray *genre; // @synthesize genre=_genre;
@property(copy, nonatomic) NSString *cat; // @synthesize cat=_cat;
@property(retain, nonatomic) NSArray *area; // @synthesize area=_area;
@property(copy, nonatomic) NSString *dbRating; // @synthesize dbRating=_dbRating;
@property(copy, nonatomic) NSString *rating; // @synthesize rating=_rating;
@property(copy, nonatomic) NSString *reportURL; // @synthesize reportURL=_reportURL;
@property(retain, nonatomic) NSArray *station; // @synthesize station=_station;
@property(retain, nonatomic) NSString *ugc_title; // @synthesize ugc_title=_ugc_title;
@property(nonatomic) _Bool like_disable; // @synthesize like_disable=_like_disable;
@property(nonatomic) int interface; // @synthesize interface=_interface;
@property(retain, nonatomic) NSDictionary *relationShip; // @synthesize relationShip=_relationShip;
@property(retain, nonatomic) NSNumber *completed; // @synthesize completed=_completed;
@property(copy, nonatomic) NSString *duration; // @synthesize duration=_duration;
@property(nonatomic) _Bool isUGC; // @synthesize isUGC=_isUGC;
@property(retain, nonatomic) NSArray *detailLanguage; // @synthesize detailLanguage=_detailLanguage;
@property(copy, nonatomic) NSString *ykNum; // @synthesize ykNum=_ykNum;
@property(copy, nonatomic) NSString *collectCount; // @synthesize collectCount=_collectCount;
@property(copy, nonatomic) NSString *favCount; // @synthesize favCount=_favCount;
@property(copy, nonatomic) NSString *releaseDate; // @synthesize releaseDate=_releaseDate;
@property(copy, nonatomic) NSString *uploader; // @synthesize uploader=_uploader;
@property(retain, nonatomic) NSArray *production; // @synthesize production=_production;
@property(copy, nonatomic) NSString *icrsToday; // @synthesize icrsToday=_icrsToday;
@property(copy, nonatomic) NSString *showCategory; // @synthesize showCategory=_showCategory;
@property(retain, nonatomic) NSArray *animeEdition; // @synthesize animeEdition=_animeEdition;
@property(copy, nonatomic) NSString *trackNotice; // @synthesize trackNotice=_trackNotice;
@property(nonatomic) _Bool hasTRackNotice; // @synthesize hasTRackNotice=_hasTRackNotice;
@property(retain, nonatomic) NSDictionary *sourceUtparam; // @synthesize sourceUtparam=_sourceUtparam;
@property(retain, nonatomic) NSDictionary *utparam; // @synthesize utparam=_utparam;
@property(nonatomic) long long videoTypeCode; // @synthesize videoTypeCode=_videoTypeCode;
@property(nonatomic) _Bool isFavorite; // @synthesize isFavorite=_isFavorite;
@property(nonatomic) long long trackAllowStatus; // @synthesize trackAllowStatus=_trackAllowStatus;
@property(nonatomic) long long seriesSubscribeType; // @synthesize seriesSubscribeType=_seriesSubscribeType;
@property(retain, nonatomic) NSArray *hasvideotype; // @synthesize hasvideotype=_hasvideotype;
@property(copy, nonatomic) NSString *youku_userid; // @synthesize youku_userid=_youku_userid;
@property(nonatomic) long long seriesid; // @synthesize seriesid=_seriesid;
@property(copy, nonatomic) NSString *episode_collected; // @synthesize episode_collected=_episode_collected;
@property(copy, nonatomic) NSString *firstepisode_videotitle; // @synthesize firstepisode_videotitle=_firstepisode_videotitle;
@property(retain, nonatomic) NSArray *showkind; // @synthesize showkind=_showkind;
@property(nonatomic) unsigned long long cats_id; // @synthesize cats_id=_cats_id;
@property(copy, nonatomic) NSString *copyright_status_tmall; // @synthesize copyright_status_tmall=_copyright_status_tmall;
@property(copy, nonatomic) NSString *copyright_status_tudou; // @synthesize copyright_status_tudou=_copyright_status_tudou;
@property(copy, nonatomic) NSString *copyright_status; // @synthesize copyright_status=_copyright_status;
@property(copy, nonatomic) NSString *showDateYK; // @synthesize showDateYK=_showDateYK;
@property(copy, nonatomic) NSString *showDate; // @synthesize showDate=_showDate;
@property(retain, nonatomic) NSArray *showalias; // @synthesize showalias=_showalias;
@property(copy, nonatomic) NSString *channelID; // @synthesize channelID=_channelID;
@property(copy, nonatomic) NSString *cid; // @synthesize cid=_cid;
@property(copy, nonatomic) NSString *sct; // @synthesize sct=_sct;
@property(copy, nonatomic) NSString *sid; // @synthesize sid=_sid;
@property(copy, nonatomic) NSString *vid; // @synthesize vid=_vid;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (int)canDown;
- (id)toDic;
- (id)init;
- (void)updateBriefWithCMSInfo:(id)arg1;
- (_Bool)setupWithCMSInfo:(id)arg1;
@property(retain, nonatomic) NSNumber *alreadyTRack; // @dynamic alreadyTRack;
@property(copy, nonatomic) NSString *limitDesc; // @dynamic limitDesc;

@end
