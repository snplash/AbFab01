//
//  AbFab01Filter.h
//  AbFab01
//
//  Copyright (c) 2012 John. All rights reserved.
//


#import <Foundation/Foundation.h>
#import <OsiriXAPI/PluginFilter.h>

@interface AbFab01Filter : PluginFilter {
	NSMutableDictionary *dictMetaData;
}

@property(readwrite, assign) NSMutableDictionary *dictMetaData;

- (long) filterImage:(NSString*) menuName;

- (NSString*)getDCMValue:(NSString*)aTagName;

- (id) getFunction:(NSString*) anExpressionForFunction :(NSArray*) anExpressionForConstantValue;

@end
