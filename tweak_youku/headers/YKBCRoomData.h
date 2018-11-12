//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface YKBCRoomData : NSObject
{
    _Bool _isfull;
    _Bool _appoint;
    _Bool _RoomStatus;
    int _strContentArrayIndex;
    NSArray *_avatars;
    NSString *_title;
    NSString *_strIcon;
    NSString *_strTime;
    NSString *_strName;
    NSString *_strContent;
    NSString *_peopleCnt;
    NSString *_strGo;
    NSString *_strStatus;
    long long _progress;
    NSString *_playStatus;
    long long _roomId;
    NSArray *_subTitleArray;
    NSArray *_strContentArray;
    long long _playTime;
}

@property(nonatomic) long long playTime; // @synthesize playTime=_playTime;
@property(nonatomic) int strContentArrayIndex; // @synthesize strContentArrayIndex=_strContentArrayIndex;
@property(retain, nonatomic) NSArray *strContentArray; // @synthesize strContentArray=_strContentArray;
@property(retain, nonatomic) NSArray *subTitleArray; // @synthesize subTitleArray=_subTitleArray;
@property(nonatomic) long long roomId; // @synthesize roomId=_roomId;
@property(retain, nonatomic) NSString *playStatus; // @synthesize playStatus=_playStatus;
@property(nonatomic) _Bool RoomStatus; // @synthesize RoomStatus=_RoomStatus;
@property(nonatomic) _Bool appoint; // @synthesize appoint=_appoint;
@property(nonatomic) _Bool isfull; // @synthesize isfull=_isfull;
@property(nonatomic) long long progress; // @synthesize progress=_progress;
@property(copy, nonatomic) NSString *strStatus; // @synthesize strStatus=_strStatus;
@property(copy, nonatomic) NSString *strGo; // @synthesize strGo=_strGo;
@property(copy, nonatomic) NSString *peopleCnt; // @synthesize peopleCnt=_peopleCnt;
@property(copy, nonatomic) NSString *strContent; // @synthesize strContent=_strContent;
@property(copy, nonatomic) NSString *strName; // @synthesize strName=_strName;
@property(copy, nonatomic) NSString *strTime; // @synthesize strTime=_strTime;
@property(copy, nonatomic) NSString *strIcon; // @synthesize strIcon=_strIcon;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSArray *avatars; // @synthesize avatars=_avatars;
- (void).cxx_destruct;
- (int)cellHeight;
- (void)changeStrContentIfNeed;
- (void)setWithDict:(id)arg1;

@end

