//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFAPIModel.h"

@class NSString, YKFSaintseiyaReportExtendDTO;

@interface YKFSaintseiyaShootButtonItemDTO : YKFAPIModel
{
    NSString *_action;
    NSString *_image;
    YKFSaintseiyaReportExtendDTO *_reportExtend;
}

@property(retain, nonatomic) YKFSaintseiyaReportExtendDTO *reportExtend; // @synthesize reportExtend=_reportExtend;
@property(retain, nonatomic) NSString *image; // @synthesize image=_image;
@property(retain, nonatomic) NSString *action; // @synthesize action=_action;
- (void).cxx_destruct;

@end

