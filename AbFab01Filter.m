//
//  AbFab01Filter.m
//  AbFab01
//
//  Copyright (c) 2012 John. All rights reserved.
//

#import "AbFab01Filter.h"

@implementation AbFab01Filter

- (void) initPlugin
{
}

- (long) filterImage:(NSString*) menuName
{
	ViewerController	*new2DViewer;
	
	// In this plugin, we will simply duplicate the current 2D window!
	
	new2DViewer = [self duplicateCurrent2DViewerWindow];
	
	if( new2DViewer) return 0; // No Errors
	else return -1;
}

@end
