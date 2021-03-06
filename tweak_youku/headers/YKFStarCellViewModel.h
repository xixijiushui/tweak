//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ALMBaseViewModel.h"

@class NSString, RACCommand;

@interface YKFStarCellViewModel : ALMBaseViewModel
{
    _Bool _subscribed;
    long long _index;
    NSString *_name;
    NSString *_subject;
    NSString *_currTagLine;
    NSString *_starAvatarUrl;
    NSString *_backgroundImageUrl;
    NSString *_targetUrl;
    unsigned long long _status;
    long long _starArrivalId;
    long long _gmtStart;
    long long _gmtNow;
    long long _fandomId;
    NSString *_subTitle;
    RACCommand *_enterStarComingCommand;
    NSString *_playsOfStar;
    NSString *_playsRole;
    NSString *_startTimeString;
    long long _subscribes;
}

+ (id)modelCustomPropertyMapper;
+ (id)modelPropertyBlacklist;
@property(nonatomic) long long subscribes; // @synthesize subscribes=_subscribes;
@property(copy, nonatomic) NSString *startTimeString; // @synthesize startTimeString=_startTimeString;
@property(copy, nonatomic) NSString *playsRole; // @synthesize playsRole=_playsRole;
@property(copy, nonatomic) NSString *playsOfStar; // @synthesize playsOfStar=_playsOfStar;
@property(retain, nonatomic) RACCommand *enterStarComingCommand; // @synthesize enterStarComingCommand=_enterStarComingCommand;
@property(retain, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(nonatomic) long long fandomId; // @synthesize fandomId=_fandomId;
@property(nonatomic) long long gmtNow; // @synthesize gmtNow=_gmtNow;
@property(nonatomic) long long gmtStart; // @synthesize gmtStart=_gmtStart;
@property(nonatomic) long long starArrivalId; // @synthesize starArrivalId=_starArrivalId;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
@property(copy, nonatomic) NSString *targetUrl; // @synthesize targetUrl=_targetUrl;
@property(copy, nonatomic) NSString *backgroundImageUrl; // @synthesize backgroundImageUrl=_backgroundImageUrl;
@property(retain, nonatomic) NSString *starAvatarUrl; // @synthesize starAvatarUrl=_starAvatarUrl;
@property(copy, nonatomic) NSString *currTagLine; // @synthesize currTagLine=_currTagLine;
@property(nonatomic) _Bool subscribed; // @synthesize subscribed=_subscribed;
@property(copy, nonatomic) NSString *subject; // @synthesize subject=_subject;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) long long index; // @synthesize index=_index;
- (void).cxx_destruct;
- (id)descString;
- (id)subTitleString;
- (_Bool)isFinished;
- (_Bool)isOnline;
- (_Bool)isNotArrive;
- (id)initWithDataModel:(id)arg1;

@end

