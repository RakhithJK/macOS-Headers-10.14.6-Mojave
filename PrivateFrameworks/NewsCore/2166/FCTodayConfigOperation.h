//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <NewsCore/FCOperation.h>

@class NSArray, NSDictionary, NSString, NTPBTodayConfig;
@protocol FCContentContext, FCCoreConfiguration;

@interface FCTodayConfigOperation : FCOperation
{
    id <FCCoreConfiguration> _configuration;
    id <FCContentContext> _context;
    NSString *_widgetConfigID;
    NSArray *_networkEvents;
    CDUnknownBlockType _todayConfigCompletionHandler;
    NTPBTodayConfig *_resultTodayConfig;
    NSDictionary *_resultHeldRecordsByType;
}

@property(retain, nonatomic) NSDictionary *resultHeldRecordsByType; // @synthesize resultHeldRecordsByType=_resultHeldRecordsByType;
@property(copy, nonatomic) NTPBTodayConfig *resultTodayConfig; // @synthesize resultTodayConfig=_resultTodayConfig;
@property(copy, nonatomic) CDUnknownBlockType todayConfigCompletionHandler; // @synthesize todayConfigCompletionHandler=_todayConfigCompletionHandler;
@property(copy, nonatomic) NSArray *networkEvents; // @synthesize networkEvents=_networkEvents;
@property(copy, nonatomic) NSString *widgetConfigID; // @synthesize widgetConfigID=_widgetConfigID;
@property(retain, nonatomic) id <FCContentContext> context; // @synthesize context=_context;
@property(copy) id <FCCoreConfiguration> configuration; // @synthesize configuration=_configuration;
- (void).cxx_destruct;
- (void)_collectRecordIDsReferencedBySectionConfig:(id)arg1 withArticleListIDs:(id)arg2 articleIDs:(id)arg3;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (BOOL)validateOperation;
- (id)init;

@end

