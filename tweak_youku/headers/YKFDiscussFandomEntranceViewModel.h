//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFVideoDiscussionCellViewModel.h"

@class NSAttributedString, NSString, RACCommand;

@interface YKFDiscussFandomEntranceViewModel : YKFVideoDiscussionCellViewModel
{
    _Bool _seperateLineHidden;
    long long _fandomID;
    NSString *_fandomName;
    long long _fansCount;
    long long _contentCount;
    NSAttributedString *_descInfoAttributedString;
    NSString *_jumpURL;
    RACCommand *_gotoFandomCommand;
    NSString *_spm;
}

+ (id)modelCustomPropertyMapper;
@property(nonatomic) _Bool seperateLineHidden; // @synthesize seperateLineHidden=_seperateLineHidden;
@property(copy, nonatomic) NSString *spm; // @synthesize spm=_spm;
@property(retain, nonatomic) RACCommand *gotoFandomCommand; // @synthesize gotoFandomCommand=_gotoFandomCommand;
@property(retain, nonatomic) NSString *jumpURL; // @synthesize jumpURL=_jumpURL;
@property(copy, nonatomic) NSAttributedString *descInfoAttributedString; // @synthesize descInfoAttributedString=_descInfoAttributedString;
@property(nonatomic) long long contentCount; // @synthesize contentCount=_contentCount;
@property(nonatomic) long long fansCount; // @synthesize fansCount=_fansCount;
@property(copy, nonatomic) NSString *fandomName; // @synthesize fandomName=_fandomName;
@property(nonatomic) long long fandomID; // @synthesize fandomID=_fandomID;
- (void).cxx_destruct;
- (id)cellIdentifier;
- (id)cellClass;
- (double)heightOfCell;
- (id)initWithDataModel:(id)arg1 videoId:(id)arg2 showId:(id)arg3;

@end

