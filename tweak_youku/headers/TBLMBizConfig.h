//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSDictionary;

@interface TBLMBizConfig : TBJSONModel
{
    NSDictionary *_typeToConfigModelDict;
}

+ (id)modelWithJSONDictionary:(id)arg1;
@property(copy, nonatomic) NSDictionary *typeToConfigModelDict; // @synthesize typeToConfigModelDict=_typeToConfigModelDict;
- (void).cxx_destruct;

@end
