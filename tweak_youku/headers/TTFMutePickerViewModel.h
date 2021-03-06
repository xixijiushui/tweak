//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ALMBaseViewModel.h"

#import "TTPickerModelProtocol.h"

@class NSArray<TTPickerModelProtocol>, NSString;

@interface TTFMutePickerViewModel : ALMBaseViewModel <TTPickerModelProtocol>
{
    unsigned long long objId;
    NSString *_name;
    long long _value;
    NSArray<TTPickerModelProtocol> *_subData;
}

@property(retain, nonatomic) NSArray<TTPickerModelProtocol> *subData; // @synthesize subData=_subData;
@property(nonatomic) long long value; // @synthesize value=_value;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) unsigned long long objId; // @synthesize objId;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

