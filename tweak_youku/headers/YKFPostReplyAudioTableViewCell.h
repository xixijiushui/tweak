//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TTFPostReplyBaseTableViewCell.h"

@class YKFAudioPlayView;

@interface YKFPostReplyAudioTableViewCell : TTFPostReplyBaseTableViewCell
{
    YKFAudioPlayView *_audioView;
}

@property(nonatomic) __weak YKFAudioPlayView *audioView; // @synthesize audioView=_audioView;
- (void).cxx_destruct;
- (void)configureWithViewModel:(id)arg1 showPostReply:(_Bool)arg2;
- (void)awakeFromNib;

@end

