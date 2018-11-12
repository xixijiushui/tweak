//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface YKPCDataModel : NSObject
{
    _Bool _statusMessagePrior;
    _Bool _showNumber;
    _Bool _dowloading;
    NSString *_bundleImageName;
    NSString *_imgPath;
    NSString *_name;
    NSString *_detail;
    NSString *_controlMessage;
    long long _detailType;
    long long _groupId;
    double _sortNum;
    long long _unreadNumber;
    NSString *_pgcardCode;
    long long _showType;
    double _rowHeight;
    long long _seperateStyle;
    long long _cellStyle;
    id _userInfo;
    NSString *_url;
}

@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) long long cellStyle; // @synthesize cellStyle=_cellStyle;
@property(nonatomic) long long seperateStyle; // @synthesize seperateStyle=_seperateStyle;
@property(nonatomic) double rowHeight; // @synthesize rowHeight=_rowHeight;
@property(nonatomic) long long showType; // @synthesize showType=_showType;
@property(nonatomic) _Bool dowloading; // @synthesize dowloading=_dowloading;
@property(retain, nonatomic) NSString *pgcardCode; // @synthesize pgcardCode=_pgcardCode;
@property(nonatomic) _Bool showNumber; // @synthesize showNumber=_showNumber;
@property(nonatomic) long long unreadNumber; // @synthesize unreadNumber=_unreadNumber;
@property(nonatomic) double sortNum; // @synthesize sortNum=_sortNum;
@property(nonatomic) long long groupId; // @synthesize groupId=_groupId;
@property(nonatomic) _Bool statusMessagePrior; // @synthesize statusMessagePrior=_statusMessagePrior;
@property(nonatomic) long long detailType; // @synthesize detailType=_detailType;
@property(retain, nonatomic) NSString *controlMessage; // @synthesize controlMessage=_controlMessage;
@property(retain, nonatomic) NSString *detail; // @synthesize detail=_detail;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *imgPath; // @synthesize imgPath=_imgPath;
@property(retain, nonatomic) NSString *bundleImageName; // @synthesize bundleImageName=_bundleImageName;
- (void).cxx_destruct;
- (id)init;

@end

