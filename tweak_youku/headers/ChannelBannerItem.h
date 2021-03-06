//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface ChannelBannerItem : NSObject
{
    _Bool _hasCollection;
    _Bool _showFilter;
    unsigned long long _jumpType;
    NSString *_title;
    NSString *_desc;
    long long _displayType;
    NSArray *_displayIcons;
    NSString *_icon;
    NSString *_largeIcon;
    NSString *_pid;
    NSString *_url;
    NSString *_aid;
    NSString *_hotWord;
    NSString *_broadcastID;
    NSString *_broadcastImgUrl;
    NSString *_broadcastUrl;
    NSString *_broadcastTitle;
    NSString *_cid;
    NSString *_subCid;
    long long _collectionState;
    long long _filterState;
}

+ (id)parse:(id)arg1;
@property(nonatomic) long long filterState; // @synthesize filterState=_filterState;
@property(nonatomic) _Bool showFilter; // @synthesize showFilter=_showFilter;
@property(nonatomic) long long collectionState; // @synthesize collectionState=_collectionState;
@property(nonatomic) _Bool hasCollection; // @synthesize hasCollection=_hasCollection;
@property(retain, nonatomic) NSString *subCid; // @synthesize subCid=_subCid;
@property(retain, nonatomic) NSString *cid; // @synthesize cid=_cid;
@property(retain, nonatomic) NSString *broadcastTitle; // @synthesize broadcastTitle=_broadcastTitle;
@property(retain, nonatomic) NSString *broadcastUrl; // @synthesize broadcastUrl=_broadcastUrl;
@property(retain, nonatomic) NSString *broadcastImgUrl; // @synthesize broadcastImgUrl=_broadcastImgUrl;
@property(retain, nonatomic) NSString *broadcastID; // @synthesize broadcastID=_broadcastID;
@property(retain, nonatomic) NSString *hotWord; // @synthesize hotWord=_hotWord;
@property(retain, nonatomic) NSString *aid; // @synthesize aid=_aid;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *pid; // @synthesize pid=_pid;
@property(retain, nonatomic) NSString *largeIcon; // @synthesize largeIcon=_largeIcon;
@property(retain, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) NSArray *displayIcons; // @synthesize displayIcons=_displayIcons;
@property(nonatomic) long long displayType; // @synthesize displayType=_displayType;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) unsigned long long jumpType; // @synthesize jumpType=_jumpType;
- (void).cxx_destruct;
- (id)bridgeToGroupItem;

@end

