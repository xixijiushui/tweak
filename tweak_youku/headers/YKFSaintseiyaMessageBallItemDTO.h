//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFAPIModel.h"

@class NSString, YKFSaintseiyaReportExtendDTO;

@interface YKFSaintseiyaMessageBallItemDTO : YKFAPIModel
{
    NSString *_icon;
    NSString *_name;
    long long _redPoint;
    YKFSaintseiyaReportExtendDTO *_reportExtend;
    long long _type;
}

@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) YKFSaintseiyaReportExtendDTO *reportExtend; // @synthesize reportExtend=_reportExtend;
@property(nonatomic) long long redPoint; // @synthesize redPoint=_redPoint;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *icon; // @synthesize icon=_icon;
- (void).cxx_destruct;

@end
