//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface OAXStroke : NSObject
{
}

+ (id)readStrokeFromXmlNode:(struct _xmlNode *)arg1 packagePart:(id)arg2 drawingState:(id)arg3;
+ (id)readCustomDashFromXmlNode:(struct _xmlNode *)arg1 drawingState:(id)arg2;
+ (id)readPresetDashFromXmlNode:(struct _xmlNode *)arg1;
+ (id)readLineEndFromXmlNode:(struct _xmlNode *)arg1;
+ (id)presetDashEnumMap;
+ (id)lineEndLengthEnumMap;
+ (id)lineEndWidthEnumMap;
+ (id)lineEndTypeEnumMap;
+ (id)penAlignmentEnumMap;
+ (id)lineCapEnumMap;
+ (id)compoundLineEnumMap;

@end

