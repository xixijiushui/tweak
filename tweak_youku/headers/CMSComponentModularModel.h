//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CMSCardVideo.h"

@class NSString;

@interface CMSComponentModularModel : CMSCardVideo
{
    NSString *_headerTitle;
    NSString *_headerBgImg;
    NSString *_headerSubtitle;
}

@property(retain, nonatomic) NSString *headerSubtitle; // @synthesize headerSubtitle=_headerSubtitle;
@property(retain, nonatomic) NSString *headerBgImg; // @synthesize headerBgImg=_headerBgImg;
@property(retain, nonatomic) NSString *headerTitle; // @synthesize headerTitle=_headerTitle;
- (void).cxx_destruct;
- (double)height;
- (_Bool)setupWithCMSInfo:(id)arg1;

@end

