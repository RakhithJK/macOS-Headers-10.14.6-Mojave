//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CalendarPersistence/CalPersistentOperation.h>

@class EWSExchangeServiceBinding;

@interface CalExchangePersistentOperation : CalPersistentOperation
{
    EWSExchangeServiceBinding *_binding;
}

+ (id)whitelistedClassesForChangedValues;
+ (void)addSetItemFieldWithExtendedPropertyName:(id)arg1 value:(id)arg2 to:(id)arg3;
+ (id)addExtendedProperty:(id)arg1 value:(id)arg2 to:(id)arg3;
@property EWSExchangeServiceBinding *binding; // @synthesize binding=_binding;
- (BOOL)validateCalendar:(id)arg1 inContext:(id)arg2;
- (BOOL)executeInContext:(id)arg1 error:(id *)arg2;
- (BOOL)executeWithBinding:(id)arg1 inSession:(id)arg2 inContext:(id)arg3 error:(id *)arg4;

@end

