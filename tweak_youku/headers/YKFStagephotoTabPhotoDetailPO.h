//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFAPIModel.h"

@class NSArray<YKFStagephotoPhotoPO>, NSString;

@interface YKFStagephotoTabPhotoDetailPO : YKFAPIModel
{
    NSString *_avatar;
    NSArray<YKFStagephotoPhotoPO> *_list;
    long long _photoNum;
    NSString *_rightContent;
    long long _setId;
    NSString *_subTitle;
    NSString *_title;
}

@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(nonatomic) long long setId; // @synthesize setId=_setId;
@property(retain, nonatomic) NSString *rightContent; // @synthesize rightContent=_rightContent;
@property(nonatomic) long long photoNum; // @synthesize photoNum=_photoNum;
@property(retain, nonatomic) NSArray<YKFStagephotoPhotoPO> *list; // @synthesize list=_list;
@property(retain, nonatomic) NSString *avatar; // @synthesize avatar=_avatar;
- (void).cxx_destruct;

@end

