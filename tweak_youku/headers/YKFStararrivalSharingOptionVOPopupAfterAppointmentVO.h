//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFAPIModel.h"

@class NSString;

@interface YKFStararrivalSharingOptionVOPopupAfterAppointmentVO : YKFAPIModel
{
    NSString *_buttonText;
    NSString *_tdescription;
}

@property(retain, nonatomic) NSString *tdescription; // @synthesize tdescription=_tdescription;
@property(retain, nonatomic) NSString *buttonText; // @synthesize buttonText=_buttonText;
- (void).cxx_destruct;
- (id)toDictionary;
- (id)initWithDictionary:(id)arg1 error:(id *)arg2;

@end

