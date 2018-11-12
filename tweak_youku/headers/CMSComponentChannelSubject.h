//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CMSComponent.h"

#import "ChannelSubjectCellDelegate.h"

@class CMSCardVideo, NSArray, NSDateFormatter, NSString, SubjectCardManager, YKSubjectInfoModel;

@interface CMSComponentChannelSubject : CMSComponent <ChannelSubjectCellDelegate>
{
    NSArray *_videosArray;
    SubjectCardManager *_subjectCardManager;
    NSDateFormatter *dateFormatter;
    YKSubjectInfoModel *_subjectInfoModel;
    CMSCardVideo *_headerVitruleVideo;
}

@property(retain, nonatomic) CMSCardVideo *headerVitruleVideo; // @synthesize headerVitruleVideo=_headerVitruleVideo;
- (void).cxx_destruct;
- (id)cmsHeaderControlName;
- (id)cmsHeaderSpmAtIndex;
- (id)cmsPageName;
- (void)sendHeaderClickStatistics;
- (void)didSelectHeader;
- (void)subjectCardVideoViewDidSelectVideo:(id)arg1 index:(unsigned long long)arg2;
- (id)componentCard:(id)arg1 cardVideoArrayForComponentContentAtIndex:(long long)arg2;
- (void)componentCard:(id)arg1 reuseCell:(id)arg2 forComponentContentAtIndex:(long long)arg3;
- (id)componentCard:(id)arg1 cellIdentifierForComponentContentAtIndex:(long long)arg2;
- (Class)componentCard:(id)arg1 cellClassForComponentContentAtIndex:(long long)arg2;
- (double)componentCard:(id)arg1 rowHeightForComponentContentAtIndex:(long long)arg2;
- (long long)componentCard:(id)arg1 rowCountForComponentContentInTableView:(id)arg2;
- (void)didFinishInitConfigurationInComponentCard:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
