//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ViewTypeBaseModel.h"

@class NSString;

@interface ViewTypeCustomAutoCorrectWordsModel : ViewTypeBaseModel
{
    NSString *_originWords;
    NSString *_correctedWords;
}

@property(retain, nonatomic) NSString *correctedWords; // @synthesize correctedWords=_correctedWords;
@property(retain, nonatomic) NSString *originWords; // @synthesize originWords=_originWords;
- (void).cxx_destruct;
- (id)initWithDic:(id)arg1;

@end
