//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MFMessageDisplayMetrics.h"

@interface MFMessageDisplayMetricsRegular : MFMessageDisplayMetrics
{
    double _avatarBottomToFirstSeparator;
    double _topToSenderBaseline;
    double _senderBaselineToRecipientBaseline;
    double _recipientBaselineToFirstSeparator;
    double _firstSeparatorToSubjectBaseline;
    double _subjectBaselineToTimestampBaseline;
    double _headerBottomPadding;
    double _statusIndicatorVerticalSpacing;
}

- (double)statusIndicatorVerticalSpacing;
- (double)headerBottomPadding;
- (double)subjectBaselineToTimestampBaseline;
- (double)firstSeparatorToSubjectBaseline;
- (double)recipientBaselineToFirstSeparator;
- (double)senderBaselineToRecipientBaseline;
- (double)topToSenderBaseline;
- (double)avatarBottomToFirstSeparator;
- (double)avatarDiameter;

@end

